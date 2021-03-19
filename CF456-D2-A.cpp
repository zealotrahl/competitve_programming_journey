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

	int n;

	cin >> n;

	vector <pair <int, int>> arr(n);

	int a,b;


	for(int i =0;i<n;i++){
		cin >> a >> b;

		arr[i] = make_pair(a,b);
	}


	sort(arr.rbegin(), arr.rend());

	bool flag = true;


	for(int i =1;i<n;i++){
		if(arr[i].second > arr[i-1].second){
			flag = false;
			break;
		}
	}

	if(!flag){
		cout << "Happy Alex";
	}else{
		
		cout << "Poor Alex";
	}
	

	system("pause");
	return 0;
}

