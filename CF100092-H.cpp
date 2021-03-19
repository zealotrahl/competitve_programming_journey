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

	ifstream fin("symposium.in");
	ofstream fout("symposium.out");


	int n;

	fin >> n;

	vector <int> arr(n);

	for(int i =0;i<n;i++){
		fin >> arr[i];
	}


	sort(arr.begin(), arr.end());


	int ans = 1;

	vector <int> out;

	for(int i =1;i<n;i++){
		if(arr[i]/arr[i-1] >= 2){
			out.push_back(ans);

			ans = 1;
		}else{
			ans++;
		}
	}

	out.push_back(ans);

	fout << *max_element(out.begin(), out.end());
	

	system("pause");
	return 0;
}


