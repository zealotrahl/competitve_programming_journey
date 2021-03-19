#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <cmath>
#include <string>
#include <climits>
 
 
using namespace std;
 
int k,m;
 
int tmp,o;
 
 
bool visited[1000];

short int graph[1000][1000];
 
 
void dfs(int i){
	visited[i] = 1;
 
 
	if(i == k-1){
		tmp = o;
	}else if(tmp == -1){
		for(int j=0; j < k;j++){
			if(tmp != -1)
				break;
			
			if(graph[i][j] == 1 && !visited[j]){
	 			dfs(j);
			}
		}
	}

}
 
int main(){
 
	int n;
 
 
	cin >> n;
 
 
	bool flag = false;
 
	short int a,b;
 
	for(int i =0;i<n;i++){
		cin >> k >> m;
 
 
		
		for(int j=0;j<k;j++){

			visited[j] = false;
			
			for(int c =0;c<k;c++){
				graph[j][c] = 0;
			}
		}
 
 
 
		for(int j =0;j<m;j++){
			cin >> a >> b;
 
			graph[b][a] = graph[a][b] = 1;
		}
 
 
		if(flag == false){
			tmp = -1;
			o = i+1;
 
 
 
			dfs(0);
 
			if(tmp != -1){
				flag = true;
			}
		}
 
	}
 
	cout << tmp;
 	

	return 0;
}