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

	cin >> n >> m;


	string first[n];
	string second[n];


	for(int i =0;i<n;i++){
		cin >> first[i];
	}

	for(int i =0;i<n;i++){
		cin >> second[i];
	}


	int count = 0;
	for(int i =0;i<n;i++){
		for(int j=0;j<m;j++){
			if(first[i][j] != second[i][j]){
				count++;
			}
		}
	}
	

	cout << count;

	system("pause");
	return 0;
}


