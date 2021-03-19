#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


bool flag =true;
bool usd[150001];
set<ll> graph[150001];

void dfs(ll p, ll &edges, ll &vertices){
  vertices++;
  if(!flag){
    return;
  }

  usd[p] = true;

  for(ll x : graph[p]){
    edges++;
    if(!usd[x]){
      dfs(x, edges, vertices);
    }
  }
}

int main(){
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

  ll n,m;
  cin >> n >> m;


  ll a,b;
  for(ll i =0;i<m;i++){
    cin >> a >> b;
    a--;
    b--;
    graph[a].insert(b);
    graph[b].insert(a);
  }

  ll edges, vertices;



  for(ll i =0;i<n;i++){
    if(!usd[i]){
      edges = 0;
      vertices = 0;
      dfs(i, edges, vertices);
      edges /= 2;
      // cout << edges << " " << vertices << endl;
      if(edges != (vertices*(vertices-1)/2)){
        flag = false;
        break;
      }
    }
  }


  if(flag){
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }


  return 0;
}


