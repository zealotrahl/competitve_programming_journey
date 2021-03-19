#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers

vector <bool> cat_vert(1e5+2);
vector <vector<int>> tree(1e5+2);
vector <bool> used(1e5+2);

int n,m;
int ans = 0;
void dfs(int v, int cur_m){
	used[v] = true;

	if(cat_vert[v]){
		cur_m++;
	}else{
		cur_m = 0;
	}

	if(cur_m > m){
		return;
	}
	
	bool flag = true;

	for(int i =0;i<tree[v].size();i++){
		if(!used[tree[v][i]]){
			flag = false;
			dfs(tree[v][i], cur_m);
		}
	}

	if(flag){
		ans++;
	}
}

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	cin >> n >> m;

	for(int i =0, a;i<n;i++){
		cin >> a;
		cat_vert[i+1] = (bool) a;
	}

	int x,y;

	for(int i =0;i<n-1;i++){
		cin >> x >> y;
		tree[x].push_back(y);
		tree[y].push_back(x);
	}

	dfs(1,0);
	cout << ans << endl;


	system("pause");
	return 0;
}

