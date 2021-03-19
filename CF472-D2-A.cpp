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
  
  int n;
  vector<bool> prime ((int)1e6+1, true);
  prime[0] = prime[1] = false;
  n = prime.size();
  for (int i=2; i<=n; ++i)
    if (prime[i])
      if (i * 1ll * i <= n)
        for (int j=i*i; j<=n; j+=i)
          prime[j] = false;

  int a;
  cin >> a;
  if(!prime[a-4]){
    cout << a-4 << " " << 4 << endl;
  } else if(!prime[a-6]){
    cout << a-6 << " " << 6 << endl;
  } else if(!prime[a-8]){
    cout << a-8 << " " << 8 << endl;
  } else if(!prime[a-9]){
    cout << a-9 << " " << 9 << endl;
  } else if(!prime[a-10]){
    cout << a-10 << " " << 10 << endl;
  }



  system("pause");
  return 0;
}