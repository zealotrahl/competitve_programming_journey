#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


double dp[400][400];

int n;
double search(int heads, int k){

  double best;

  if(k == 0) return heads;

  if(dp[heads][k]) return dp[heads][k];

  best = -1;

  if(heads > 0) {
    best = max(best, 0.5*(search(heads, k-1) + search(heads-1, k-1)));
  }

  if(heads < n){
    best = max(best, 0.5*(search(heads+1, k-1) + search(heads, k-1)));
  }

  return dp[heads][k] = best;
}

int main(){
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

  int k;

  cin >> n >> k;
  if(k<=n){
    cout << 1.0*k/2 << endl;
  } else {
    cout << setprecision(9) << search(0,k) << endl;;
  }

  return 0;
}


