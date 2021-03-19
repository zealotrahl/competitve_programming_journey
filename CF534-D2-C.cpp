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
  
  long long n, sum;
  cin >> n >> sum;
  vector<long long> kosti(n);
  long long summa_kostey = 0;
  for(long long i =0;i<n;i++){
    cin >> kosti[i];
    summa_kostey += kosti[i];
  }

  if(summa_kostey == sum || sum == n || n == 1){
    for(long long i =0;i<n;i++){
      cout << kosti[i] -1 << " ";
    }
    cout << endl;
  } else {
    for(long long i = 0;i<n;i++){
      int l = max(1LL, sum - (summa_kostey - kosti[i]));
      int r = min(0LL + kosti[i], sum - (n - 1));
      int ans = kosti[i] - (r - l + 1); 
      // if(kosti[i] >= sum){
      //   ans += kosti[i] - sum + 1;
      // };
      cout << ans << " ";
    }
    cout << endl;
  }


  system("pause");
  return 0;
}