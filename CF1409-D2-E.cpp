#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<int> vi;
 
#define PB push_back
#define MP make_pair
// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers
 
 
struct P {
  int x, y;
  bool operator<(const P &p) {
    if (x != p.x) return x < p.x;
    else return y < p.y;
  }
};
 
void subsetGenerate(int n){
  for (int b = 0; b < (1<<n); b++) {
    vector<int> subset;
    for (int i = 0; i < n; i++) {
      if (b&(1<<i)) subset.push_back(i);
    }
  }
}
 
void permutationGenerate(int n){
  vector<int> permutation;
  for (int i = 0; i < n; i++) {
    permutation.push_back(i);
  }
  do {
  // process permutation
  } while (next_permutation(permutation.begin(),permutation.end()));
}
 
bool customSort(int a, int b) {
  return a < b;
}
 
int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  //string s
  //getline(cin, s);
  //printf("%.9f\n", x);
  
  int t;
  cin >> t;
  while(t--){
    int n,k;
    cin >> n >> k;
 
    vector<int> x_s(n);
    vector<int> y_s(n);
 
    for(int i = 0;i<n;i++){
      cin >> x_s[i];
    }
    for(int i = 0;i<n;i++){
      cin >> y_s[i];
    }
 
    sort(x_s.begin(), x_s.end());

    if(n == 1){
      cout << 1 << endl;
      continue;
    }

    vector<int> pref(n+1);
    vector<int> suf(n+1);

    pref[0] = 0;
    int bin_p;
    for(int i =1;i<=n;i++){
      int cur;
      bin_p = upper_bound(x_s.begin(), x_s.end(), x_s[i-1] - k) - x_s.begin();

      cur = i - bin_p + 1;
      pref[i] = max(pref[i-1], cur);
    }
    suf[n] = 0;
    for(int i = n-1;i>=0;i--){
      int cur;
      bin_p = upper_bound(x_s.begin(), x_s.end(), x_s[i] + k) - x_s.begin();

      cur = bin_p - i;

      suf[i] = max(suf[i+1], cur);
    }
    // for(int i =0;i<n+1;i++){
    //   cout << pref[i] << " ";
    // }
    // cout << endl;
    // for(int i =0;i<n+1;i++){
    //   cout << suf[i] << " ";
    // }
    // cout << endl;

    int ans = INT_MIN;
    for(int i =0;i<n;i++){

      ans = max(ans, pref[i] + suf[i+1]);
    }

    cout << ans << endl;
  }
 
  return 0;
}