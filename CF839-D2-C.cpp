#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers

vector<double> graph[(int)1e5];
vector<bool> used((int)1e5);

double expected = 0;
void dfs(int p, double deep, double percent){
  used[p] = true;


  // cout << p << " " << percent << endl;
  double size = graph[p].size();
  if(deep != 0){
    size--;
  }
  for(double x : graph[p]){
    if(!used[x]){
      dfs(x, deep+1, percent*(1/size));
    }
  }
  if(graph[p].size() == 1){
    // cout << p << " " << deep << " " << percent << endl;
    expected += deep*percent;
  }
}

int main(){
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

  double n;
  cin >> n;

  int a,b;
  for(int i =0;i<n-1;i++){
    cin >> a >> b;
    a--;
    b--;
    graph[a].push_back(b);
    graph[b].push_back(a);
  }

  dfs(0, 0, 1.0);

  cout <<  std::setprecision(9) << expected << endl;

  return 0;
}


