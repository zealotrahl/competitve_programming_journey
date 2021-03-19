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

vector <int> G[1000010];
vector <int> Gt[1000010]; // транспонированній граф
vector<bool> used;
vector<int> order, component;
int res[1000010];
int n, m, num=1;
 
void dfs_1 (int u) {
 used[u]=1;
 for (int i=0; i<G[u].size(); i++) {
     if (used[G[u][i]]==0) {
         dfs_1(G[u][i]);
     }
 }
 order.push_back(u);
}
 
void dfs_2 (int u) {
  used[u]=1;
  component.push_back(u);
  for (int i=0; i<Gt[u].size(); i++) {
      if (used[Gt[u][i]]==0) {
          dfs_2 (Gt[u][i]);
      }
  }
}
 
int main() {
 ios::sync_with_stdio(false);
 cin >> n >> m;
 
 while (m--) {
     int a, b;
     cin >> a >> b;
     a--;
     b--;
     G[a].push_back(b);
     Gt[b].push_back(a);
 }
 
 used.assign (n, false);
 
 for (int i=0; i<n; i++) {
         if (used[i]==0) dfs_1(i);
 }
 
 used.assign (n, false);
 
 for (int i=0; i<n; i++) {
      int v=order[n-1-i];
      if (used[v]==0) {
          dfs_2 (v);
          for(auto I=component.begin(); I!=component.end(); I++)
              res[*I]=num;
          num++;
          component.clear();
      }
  }
  
  map<int, vector<int>> ans;
  for (int i=0; i<n; i++) {
  	ans[res[i]].push_back(i+1);
  }
  int max_len = 0;
  int max_val = -1;
  bool flag = false;
  for(auto x : ans) {
  	// cout << x.second.size() << endl;
  	if(x.second.size() > max_len && x.second.size() > 1) {
  		flag = true;
  		// cout << 123 << endl;
  		max_len = x.second.size();
  		max_val = x.first;
  	}
  }

  if(flag) {
  	cout << max_len << endl;
  	for(int i = 0;i<max_len;i++){
  		cout << ans[max_val][i] << " ";
  	}
  	cout << endl;
  } else {
  	cout << 0 << endl;
  }


	system("pause");
  return 0;
}