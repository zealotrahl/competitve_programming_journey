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

long long power(long long base, long long power){
  long long orig_base = base;
  base = 1;
  for(int i = 0;i<power;i++){
    base *= orig_base;
  }
  return base;
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
    string n;
    int s;
    cin >> n >> s;
    int sum = 0;
    for(int i =0;i<n.size();i++){
      int a = n[i] - '0';
      sum += a;
    }

    if(sum == s){
      cout << 0 << endl;
    } else {
      bool carry = false;
      long long ans = 0;
      for(int i = n.size() -1; i>=0;i--){
        // cout << sum << endl;
        if(sum <= s){
          break;
        }
        int a = n[i] - '0';
        if(carry && a == 9){
          carry = true;
          sum -= a;
          continue;
        }

        if(carry && a < 9){
          a++;
        }
        sum -= a;
        long long p = power(10, n.size() - i - 1);
        ans += (10 - a)*p;
        carry = true;
        sum++;
      }
      cout << ans << endl;
    }
  }

  system("pause");
  return 0;
}