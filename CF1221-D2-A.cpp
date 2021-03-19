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


	int q;

	cin >> q;


	int n;

	while(q--){
		cin >> n;


		vector <int> arr(n);


		bool flag = false;

		for(int i =0;i<n;i++){
			cin >> arr[i];

			if(arr[i] == 2048)
				flag = true;
		}

		if(flag){
			cout << "YES\n";
			continue;
		}


		sort(arr.begin(), arr.end());


		int cur = 0;

		for(int i =arr.size()-1;i>=0;i--){

			if(cur == 2048){
				break;
			}

			if(arr[i] > 1024)
				continue;
			else{
				cur += arr[i];
			}

		}


		if(cur == 2048)
			cout << "YES\n";
		else
			cout << "NO\n";
	}

	system("pause");
	return 0;
}


