#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
 
// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers

vector <vector<int>> graph(200005);
bool visited[200005];

int n,k;
vector <pair<long long,long long>> nums;

int dfs(int v, long long current){
	visited[v] = true;
	int deti = 0;
	for(int i =0;i<graph[v].size();i++){
		if(!visited[graph[v][i]]){
			deti += dfs(graph[v][i], current+1);
		}
	}
	current -= deti;
	nums[v] = make_pair(v, current);
	return deti+1;
}

bool sortinrev(const pair<int,int>& a,const pair<int,int>& b) 
{
	return a.second > b.second;
}

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	cin >> n >> k;
	for(int i =0;i<n;i++){
		nums.push_back(make_pair(0,0));
	}
	int u,v;
	for(int i =0;i<n-1;i++){
		cin >> u >> v;
		u--;
		v--;
		graph[u].push_back(v);
		graph[v].push_back(u);
	}
	dfs(0,0);
	sort(nums.begin(), nums.end(), sortinrev);
	set <int> us;
	long long counter = 0;
	for(int i=0;i<k;i++){
		counter += (nums[i].second);
		// us.insert(nums[i].first);
	}

	if(counter < 0)
		counter = 0;

	cout << counter;

	system("pause");
	return 0;
}