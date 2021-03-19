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
  vector<ll> b_s(n);

  ll need = 0;
  ll pos = INT_MIN;
  ll a,b;

  for(int i =0;i<n;i++){
    cin >> a;
    need += a;
  }

  for(int i =0;i<n;i++){
    cin >> b_s[i];
  }

  sort(b_s.rbegin(), b_s.rend());
  b = b_s[0];
  need -= b;
  need -= b_s[1];



  if(need <= 0){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }



  return 0;
}


