#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers



vector<int> Centroid(const vector<vector<int>> &g) {
        int n = g.size();
        vector<int> centroid;
        vector<int> sz(n);
        function<void (int, int)> dfs = [&](int u, int prev) {
                sz[u] = 1;
                bool is_centroid = true;
                for (auto v : g[u]) if (v != prev) {
                        dfs(v, u);
                        sz[u] += sz[v];
                        if (sz[v] > n / 2) is_centroid = false;
                }
                if (n - sz[u] > n / 2) is_centroid = false;
                if (is_centroid) centroid.push_back(u);
        };
        dfs(0, -1);
        return centroid;
}

int main(){
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);


  /*
      construct a tree
  */


  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<vector<int>> g(n);
    int x,y;
    for(int i =0;i<n-1;i++){
      cin >> x >> y;
      x--;
      y--;
      g[x].push_back(y);
      g[y].push_back(x);
    }

    auto centroids = Centroid(g);
    if (centroids.size() == 1) {
        int c = centroids[0];
        cout << c+1 << " " << g[c][0] + 1 << endl;
        cout << c+1 << " " << g[c][0] + 1 << endl;
    } else if (centroids.size() == 2) {
        int c1 = centroids[0];
        int c2 = centroids[1];
        int k = g[c1][0];
        if(k == c2){
          k = g[c1][1];
        }

        cout << c1 + 1 << " " << k+1 << endl;
        cout << c2+1 << " " << k+1 << endl;
    }

  }

  return 0;
}


