#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


int ans = 0;

vector<int> counts((int)1e5+1, 0);
vector<int> graph[(int)1e5+1];

void dfs(int s, int e){
  counts[s] = 1;

  for(auto u : graph[s]){
    if(u == e) continue;
    dfs(u, s);
    if(!(counts[u]&1)){
      ans++;
    }
    counts[s] += counts[u];
  }
}

int main(){
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

  int n;
  cin >> n;



  for(int i =0;i<n-1;i++){
    int a,b;
    cin >> a >> b;
    a--;
    b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  if(n&1){
    cout << -1 << endl;
    return 0;
  }


  dfs(0,0);



  cout << ans << endl;



  return 0;
}


