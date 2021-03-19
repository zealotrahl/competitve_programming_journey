#include <bits/stdc++.h>
#include <fstream>


using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




int main(){
	ifstream fin("skateboard.in");
	ofstream fout("skateboard.out");


	int n;

	fin >> n;

	vector <int> arr(1000);
	
	for(int i =0;i<n;i++)
		fin >> arr[i];


	int ans = 0;


	bool flag = false;

	for(int i =0;i<n;i++){
		if(i - 1 >= 0 && arr[i-1] < arr[i] && i+1 < n && arr[i+1] < arr[i]){

			ans++;
		}
	}

	fout << ans;


	system("pause");
	return 0;
}


