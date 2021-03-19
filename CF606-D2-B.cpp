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
  
  int x,y, x0,y0;
  cin >> x >> y >> x0 >> y0;
  string s;
  cin >> s;
  int n = s.size();

  vector<int> ans(n+1, 0);
  set<pair<int,int>> st;
  ans[0] = 1;
  st.insert({x0,y0});

  for(int i =0;i<n-1;i++){
    if(s[i] == 'U' && x0 > 1){
      x0--;
    } else if(s[i] == 'D' && x0 < x){
      x0++;
    } else if(s[i] == 'L' && y0 > 1){
      y0--;
    } else if(s[i] == 'R' && y0 < y){
      y0++;
    }
    ans[i+1] = (int)!(st.count({x0,y0}));
      st.insert({x0,y0});
  }

  ans[n] = (x*y)-st.size();
  for(int i =0;i<=n;i++){
    cout << ans[i] << " ";
  }
  cout << endl;
  system("pause");
  return 0;
}