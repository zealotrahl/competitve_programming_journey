#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers



bool custom_sort(const tuple<int,int, int> &a, 
              const tuple<int,int, int> &b) 
{ 
  if(get<1>(a) == get<1>(b)){
    return get<0>(a) < get<0>(b);
  }
  return get<1>(a) < get<1>(b);
} 

int main(){
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

  int n,m;
  cin >> n >> m;

  vector<pair<int,int>> studs(n);
  for(int i=0;i<n;i++){
    cin >> studs[i].first;
    studs[i].second = i;
  }
  vector<tuple<int,int, int>> buildings(m);
  int a;
  for(int i =0;i<m;i++){
    cin >> a;
    get<0>(buildings[i]) = a;
    get<2>(buildings[i]) = i;
  }
  for(int i =0;i<m;i++){
    cin >> a;
    get<1>(buildings[i]) = a;
  }

  sort(buildings.begin(), buildings.end(), custom_sort);
  sort(studs.rbegin(), studs.rend());
  vector<bool> used(m);
  int done = 0;
  bool found = true;
  vector<int> ans(n);
  for(int i =0;i<n;i++){
    found = false;
    for(int j =0;j<m;j++){
      if(used[j])
        continue;
      if(get<0>(buildings[j]) >= studs[i].first){
        ans[studs[i].second] = get<2>(buildings[j]) + 1;
        used[j] = true;
        found = true;
        break;
      }
    }
    if(!found){
      break;
    }
  }

  if(found){
    for(int i =0;i<n;i++){
      cout << ans[i] << " ";
    }
    cout << endl;
  }else{
    cout << "impossible" << endl;
  }



  return 0;
}

  