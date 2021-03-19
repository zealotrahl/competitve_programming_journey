#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,m;


	cin >>n >> m;

	char p;

	char graph[n][m];

	for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			cin >> graph[i][j];
		}
	}

	int count = 0;

	for(int i =0;i<n;i++){
		bool flag = true;
		for(int j =0;j<m;j++){
			if(graph[i][j] == 'S'){
				flag = false;
				break;
			}
		}

		if(flag){
			count += m;
			for(int j =0;j<m;j++){
				graph[i][j] = '#';
			}
		}
	}


	for(int i =0;i<m;i++){
		bool flag = true;

		for(int j =0;j<n;j++){
			if(graph[j][i] == 'S'){
				flag = false;
				break;
			}
		}

		if(flag){

			for(int j =0;j<n;j++){
				if(graph[j][i] != '#')
					count++;
			}
		}

	}

	cout << count;
	

	system("pause");
	return 0;
}


