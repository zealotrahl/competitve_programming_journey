#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int n, m, k;

	cin >> n >> m >> k;


	int graph[n][m];

	char picture[n][m];

	char c;
	for(int i = 0;i<n;i++){
		for(int j = 0;j < m;j++){
			cin >> c;

			picture[i][j] = c;
		}
	}


	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			if(i == j){
				graph[i][j] = 0;
			}else{
				if(graph)

			}

		}
	}
	


	return 0;
}
