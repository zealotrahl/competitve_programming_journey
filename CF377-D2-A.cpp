#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;
int n, m, k;

void display(int arr[][]){
	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			cout << arr[i][j];
		}
		cout << "\n";
	}
}

int main(){



	cin >> n >> m >> k;


	int graph[n][m];



	char c;
	for(int i = 0;i<n;i++){
		for(int j = 0;j < m;j++){
			cin >> c;

			picture[i][j] = c;
		}
	}


	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			if(k == 0){
				display(picture);
			}else{
				

			}
		}
	}
	


	return 0;
}
