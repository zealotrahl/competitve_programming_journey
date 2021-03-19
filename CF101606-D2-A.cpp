#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




int main(){
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

  int n;
  cin >> n;

  vector<tuple<int,int,int>> setles(n);

  int longest_hour = 0;
  for(int i =0;i<n;i++){
    int a,b,c;
    cin >> a >> b >> c;
    longest_hour = max(a, longest_hour);
    setles[i] = make_tuple(a,b,c);
  }

  ll cur_hour = 0;
  bool flag = true;
  for(ll i = 0;i<1825;i++){
    ll one_day = longest_hour;
    ll day_hour = 0;
    while(one_day){
      flag = true;
      for(ll j =0;j<n;j++){
        ll setl_hour =  cur_hour%get<0>(setles[j]);
        // cout << setl_hour << endl;
        if(get<1>(setles[j]) < get<2>(setles[j])){
          if(setl_hour > get<1>(setles[j]) && setl_hour < get<2>(setles[j])){
            flag = false;
            break;
          }
        } else{
          if(!(setl_hour >= get<2>(setles[j]) && setl_hour <= get<1>(setles[j]))){
            flag = false;
            break;
          }
        }

      }
      if(flag){
        break;
      }
      day_hour++;
      cur_hour++;
      one_day--;
    }
    if(flag){
      break;
    }
  }

  if(!flag){
    cout << "impossible" << endl;
  } else {
    cout << cur_hour << endl;
  }

  return 0;
}


