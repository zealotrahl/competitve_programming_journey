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

string s;
int ans;
void solve(char c, int left, int right, int cur) {
  if(left == right){
    cur += (s[left] != c);
    ans = min(ans, cur);
    return;
  }

  int middle = (left+right)/2 + 1;

  int lc = 0;
  for(int i =left;i<middle;i++){
    if(s[i] != c){
      lc++;
    }
  }
  int rc = 0;
  for(int i =middle;i<=right;i++){
    if(s[i] != c){
      rc++;
    }
  }

  solve(c+1, left, middle-1, cur+rc);
  solve(c+1, middle, right, cur+lc);
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
    int n;
    cin >> n;
    cin >> s;

    int left = 0;
    int right = n-1;
    ans = INT_MAX;
    solve('a', left, right, 0);
    cout << ans << endl;
  }

  system("pause");
  return 0;
}