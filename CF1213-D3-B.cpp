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

	int t;

	cin >> t;

	while(t--){
		int n;
		cin >> n;

		set <int> st;
		vector <int> arr(n);
		vector <int> poryadok(n);

		int a;


		for(int i =0;i<n;i++){
			cin >> a;

			arr[i] = a;

			poryadok[i] = a;

		}


		int count = 0;


		for(int i =n-2;i>=0;i--){

			if(arr[i] > arr[i+1]){
				arr[i] = arr[i+1];
				count++;
			}
		}




		cout << count << "\n";




	}
	

	system("pause");
	return 0;
}


