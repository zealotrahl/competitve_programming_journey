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

	int n;

	ifstream fin("input.txt");
	ofstream fout("output.txt");


	fin >> n;

	vector <int> nums(5001,0);

	int a;

	for(int i =0;i<n;i++){
		fin >> a;

		nums[a]++;
	}

	int ans = INT_MAX;


	for(int i =1;i<5001;i++){
		int cur = 0;

		for(int j = 1; j<5001;j++){
			if(j < i || j > 2*i){
				cur += nums[j];
			}
		}

		ans = min(ans, cur);
	}

	fout << ans;

	system("pause");
	return 0;
}
