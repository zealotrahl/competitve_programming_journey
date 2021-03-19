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
  string s;
  cin >> s;

  int x;
  char c;
  vector<int> sums(n,0);

  int ans = 0;
  for(int i =0;i<n-1;i++){
    if(s[i] == '.' && s[i+1] == '.'){
      sums[i]++;
      sums[i+1]++;
      ans++;
    }
    // cout << sums[i] << " ";
  }
  // cout << endl;s

  for(int i =0;i<m;i++){
    cin >> x >> c;
    x--;
    if(c == '.' && s[x] == '.'){
      cout << ans << endl;
      continue;
    }

    if(c == '.'){
      int count = 0;
      if(x+1 < n && s[x+1] == '.'){
        sums[x+1]++;
        count++;
      }
      if(x-1 >= 0 && s[x-1] == '.'){
        sums[x-1]++;
        count++;
      }
      sums[x] = count;
      ans += count;
    } else if(s[x] == '.') {
      ans -= sums[x];
      sums[x] = 0;
      if(x+1 < n && s[x+1] == '.'){
        sums[x+1]--;
      }
      if(x-1 >= 0 && s[x-1] == '.'){
        sums[x-1]--;
      }
    }
    s[x] = c;
    cout << ans << endl;
  }



  system("pause");
  return 0;
}
