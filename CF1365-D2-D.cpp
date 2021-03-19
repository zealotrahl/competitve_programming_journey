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

char mp[51][51];
map<pair<int,int>,bool> used;
int n,m;
void dfs(int x,int y){
  used[{x,y}] = true;

    if(x < n-1 && !used[{x+1,y}] && mp[x+1][y] != '#'){
      dfs(x+1,y);
    }
    if(y < m-1 && !used[{x,y+1}] && mp[x][y+1] != '#'){
      dfs(x,y+1);
    }
    if(x > 0 && !used[{x-1,y}] && mp[x-1][y] != '#'){
      dfs(x-1,y);
    }
    if(y > 0 && !used[{x,y-1}] && mp[x][y-1] != '#'){
      dfs(x,y-1);
    }
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
    cin >> n >> m;
    used.clear();
    for(int i =0;i<n;i++){
      for(int j =0;j<m;j++){
        cin >> mp[i][j];
      }
    }

    bool wrong = false;
    for(int i =0;i<n;i++){
      if(wrong){
        break;
      }
      for(int j =0;j<m;j++){
        if(mp[i][j] == 'B'){
          if(i+1 < n && mp[i+1][j] != 'B'){
            if(mp[i+1][j] == 'G'){
              wrong = true;
              break;
            }
            mp[i+1][j] = '#';
          }
          if(j+1 < m && mp[i][j+1] != 'B'){
            if(mp[i][j+1] == 'G'){
              wrong = true;
              break;
            }
            mp[i][j+1] = '#';
          }
          if(i-1 >=0 && mp[i-1][j] != 'B'){
            if(mp[i-1][j] == 'G'){
              wrong = true;
              break;
            }
            mp[i-1][j] = '#';
          }
          if(j-1 >=0 && mp[i][j-1] != 'B'){
            if(mp[i][j-1] == 'G'){
              wrong = true;
              break;
            }
            mp[i][j-1] = '#';
          }
        }
      }
    }

    if(mp[n-1][m-1] != '#')
      dfs(n-1,m-1);
    for(int i =0;i<n;i++){
      for(int j=0;j<m;j++){
        if(mp[i][j] == 'G' && !used[{i,j}]){
          wrong = true;
          break;
        }
      }
      if(wrong){
        break;
      }
    }

    if(wrong){
      cout << "NO" << endl;
    }else{
      cout << "YES" << endl;
    }
  }

  system("pause");
  return 0;
}