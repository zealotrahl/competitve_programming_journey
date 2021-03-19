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

  map<int, double> mp;

  mp[0] = 2;
  mp[1] = 1;
  mp[2] = 0.5;
  mp[4] = 0.25;
  mp[8] = 0.125;
  mp[16] = (1.0/16.0);


  int n;
  cin >> n;
  double ans = 0;
  int a;
  for(int i =0;i<n;i++){
    cin >> a;
    ans += mp[a];
  }
  cout << setprecision(9) << ans << endl;
  return 0;
}


