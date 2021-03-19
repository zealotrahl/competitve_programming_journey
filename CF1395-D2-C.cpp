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
  
  int n,m;
  cin >> n >> m;
  vector<unsigned int> a_arr(n);
  vector<unsigned int> b_arr(m);
  for(int i =0;i<n;i++)
    cin >> a_arr[i];
  for(int i=0;i<m;i++)
    cin >> b_arr[i];
 
  unsigned int ans = INT_MAX;
 
  for(int i = 0;i<n;i++){
    for(int j =0;j<m;j++){
      unsigned int ref_c = a_arr[i]&b_arr[j];
      for(int p = 0;p<n;p++){
        if(p == i) continue;
        unsigned int chek_c = ref_c|(a_arr[p]&b_arr[0]);
        for(int u = 0;u<m;u++){
          chek_c = min(chek_c, ref_c|(a_arr[p]&b_arr[u]));
        }
        ref_c |= chek_c;
      }
      ans = min(ans, ref_c);
    }
  }

  cout << ans << endl;

  system("pause");

  return 0;
}