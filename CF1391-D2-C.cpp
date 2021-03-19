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


long long binpow (long long a, long long n) {
  long long res = 1;
  while (n) {
    if (n & 1)
      res = ((res%1000000007)*(a%1000000007))%1000000007;
    a = ((a%1000000007)*(a%1000000007))%1000000007;
    n >>= 1;
  }
  return res%1000000007;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  //string s
  //getline(cin, s);
  //printf("%.9f\n", x);
  
  long long n;
  cin >> n;

  long long ans = 1;
  for(long long i =1;i<=n;i++){
    ans = (ans%1000000007)*(i%1000000007)%1000000007;
  }
  cout << (((ans - binpow(2, n-1)))+1000000007)%1000000007 << endl;

  system("pause");
  return 0;
}
