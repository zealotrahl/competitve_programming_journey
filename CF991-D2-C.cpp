#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


bool check(ll k, ll n){
  ll curr = n;
  ll sum = 0;
  while(curr > 0){
    ll p = min(curr, k);
    curr -= p;
    sum += p;
    curr -= curr/10;
  }

  return 2*sum >= n;
}

int main(){
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

  ll n;
  cin >> n;

  ll l = 1;
  ll r = n;
  ll ans = INT_MAX;
  while(l <= r){
    ll mid = (l+r)/2;
    if(check(mid, n)) {
      ans = mid;
      r = mid-1;
    } else {
      l = mid+1;
    }
  }
  cout << ans << endl;


  return 0;
}


