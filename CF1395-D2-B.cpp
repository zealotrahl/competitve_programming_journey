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
  
  int n,m,s_x,s_y;
  cin >> n >> m >> s_x >> s_y;

  int x = s_x;
  int y = s_y;
  int i,j;
  set<pair<int,int>> used;
  used.insert({x,y});
  cout << x << " " << y << endl;
  for(i =x;i>1;i--){
    used.insert({i-1,y});
    cout << i-1 << " " << y << endl;
  }
  x = i;
  for(j = y; j > 1;j--){
    used.insert({x,j-1});
    cout << x << " " << j-1 << endl; 
  }
  y = j;

  for (int i = 0; i < n; i++) { 
       if (i % 2 == 0) { 
           for (int j = 0; j < m; j++){
              if(used.count({i+1,j+1})){
                continue;
              }
              used.insert({i+1,j+1});
              cout << i+1 << " " << j+1 << endl;
           }
       } else { 
           for (int j = m-1; j >= 0; j--){
            if(used.count({i+1,j+1})){
              continue;
            }
            used.insert({i+1,j+1});
            cout << i+1 << " " << j+1 << endl;
           }
       } 
   } 

  system("pause");
  return 0;
}