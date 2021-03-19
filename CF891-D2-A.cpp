#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


bool isPrime(ll number){

    if(number < 2) return false;
    if(number == 2) return true;
    if(number % 2 == 0) return false;
    for(ll i=3; (i*i)<=number; i+=2){
        if(number % i == 0 ) return false;
    }
    return true;

}


int main(){
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

  int n;
  cin >> n;

  vector<ll> arr(n);

  for(ll i =0;i<n;i++){
    cin >> arr[i];
  }
  int ans = INT_MAX;
  bool found =false;
  int ones =0;
  for(int i =0;i<n;i++){
    if(arr[i] == 1){
      ones++;
    }
  }

  if(ones){
    cout << n-ones << endl;
  } else {
    ll dlinna = INT_MAX;
    for(ll i =0;i<n;i++){
      ll cur_gcd = arr[i];
      ll j;
      for(j =i+1;j<n;j++){
        cur_gcd = __gcd(cur_gcd, arr[j]);
        if(cur_gcd == 1){
          break;
        }
      }

      if(cur_gcd == 1){
        // cout << j << " " << i << endl;
        dlinna = min(dlinna, j - i);
      }
    }
    if(dlinna == INT_MAX){
      cout << -1 << endl;
    } else {
      // cout << dlinna << endl;
      cout << dlinna + n -1 << endl;
    }

  }



  return 0;
}


