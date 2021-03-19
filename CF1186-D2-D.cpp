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
  vector<int> ans(n);
  vector <bool> was_int(n, false);
  float a;
  ll sum = 0;
  for(int i =0;i<n;i++){
    cin >> a;
    ans[i] = floor(a);
    sum += ans[i];
    if((float)ans[i] == a){
      was_int[i] = true;
    }
  }

  for(int i =0;i<n;i++){
    if(sum == 0){
      break;
    } else {
      if(!was_int[i]){
        sum++;
        ans[i]++;
      }
    }
  }
  for(int i =0;i<n;i++)
    cout << ans[i] << " ";

  cout << endl;



  return 0;
}


