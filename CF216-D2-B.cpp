#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;



vector <vector <int>> graph;

vector <int> visited;

int tmp, num, n;

vector <int> prv;
void dfs(int i){
	visited[i] = 1;

	num++;
	for(int j=0; j < n;j++){
		if(graph[i][j] == 1 && j != prv[i]){

			if(!visited[j]){
				prv[j] = i;
				dfs(j);
			}else
				tmp = 1;


		}
	}

}

int main(){

	int m;

	cin >> n >> m;


	
	for(int i=0;i<n;i++){
		vector<int> row;
		for(int j =0;j<n;j++)
			row.push_back(0);


		visited.push_back(0);
		prv.push_back(-1);
		
		graph.push_back(row);
	}


	while(m){
		int a,b;


		cin >> a >> b;
		a--;
		b--;
		
		graph[a][b] = graph[b][a] = 1;

		m--;
	}

	int ans = 0;
	for(int i =0; i < n; i++){
		if(!visited[i]){
			num = 0;
			tmp = 0;
			dfs(i);

			if(tmp && (num&1))
				ans++;
		}
	}


	if((n-ans)&1)
		ans++;

	cout << ans;
	return 0;
}
