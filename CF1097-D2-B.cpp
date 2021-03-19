#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


int n;
vector <int> arr(16);

bool clockwise(int current, int i){
	if(current > 359){
		current -= 360;
	}

	if(current < -359){
		current += 360;
	}

	if(current == 0 && i == n){
		return true;
	}else if (i == n){
		return false;
	}else{
		bool fl = clockwise(current+arr[i],i+1);

		bool fr = clockwise(current-arr[i],i+1);

		return fl || fr;
	}
}


int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	cin >> n;


	for(int i =0;i<n;i++){
		cin >> arr[i];
	}
	
	bool ans = clockwise(0,0);

	cout << (ans ? "YES\n" : "NO\n");

	system("pause");
	return 0;
}


