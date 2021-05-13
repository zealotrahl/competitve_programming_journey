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

int n,m,k;
char graph[500][500];
bool visited[500][500];
int counter;

void dfs(int i, int j) {
	if(k <= 0) {
		return;
	}
	bool flag = false;
	visited[i][j] = true;
	if(i > 0 && !visited[i-1][j] && graph[i-1][j] == '.') {
		flag |= true;
		dfs(i-1, j);
	}
	if(i < n-1 && !visited[i+1][j] && graph[i+1][j] == '.') {
		flag |= true;
		dfs(i+1, j);
	}
	if(j > 0 && !visited[i][j-1] && graph[i][j-1] == '.') {
		flag |= true;
		dfs(i, j-1);
	}
	if(j < m-1 && !visited[i][j+1] && graph[i][j+1] == '.') {
		flag |= true;
		dfs(i, j+1);
	}
	if(k > 0) {
		graph[i][j] = 'X';
		k--;
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
	
	cin >> n >> m >> k;
	counter = 0;
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			cin >> graph[i][j];
			if(graph[i][j] == '.') {
				counter++;
			}
		}
	}

	int start_i = -1;
	int start_j = -1;
	for(int i=0;i<n;i++) {
		for(int j =0;j<m;j++) {
			if(graph[i][j] == '.' && start_i == -1) {
				start_i = i;
				start_j = j;
			}
			visited[i][j] = false;
		}
	}
	dfs(start_i, start_j);

	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			cout<< graph[i][j];
		}
		cout << endl;
	}

	system("pause");
	return 0;
}