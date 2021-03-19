#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers

long long counter = 0;




int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	long long n,k;

	cin >> n >> k;

	string s;

	cin >> s;


	set <char> alpha;
	char c;


	for(long long i =0;i<k;i++){
		cin >> c;

		alpha.insert(c);
	}

	vector <long long> arr;

	for(long long i =0;i<n;i++){
		if(!alpha.count(s[i])){
			arr.push_back(i);
		}
	}

	if(arr.size() == 0){
		counter = n*(n+1)/2;
	}else{

		counter += arr[0]*(arr[0]+1)/2;

		for(long long i =1;i<arr.size();i++){

			long long dist = arr[i] - arr[i-1];
			dist--;


			counter += dist*(dist+1)/2;
		}

		long long dist_till = n-1 - arr[arr.size()-1];

		counter += dist_till*(dist_till+1)/2;
	}



	cout << counter;

	system("pause");
	return 0;
}


