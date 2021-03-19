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

	int n;

	cin >> n;


	vector <int> arr(n);

	vector <int> out(n);

	vector <bool> even(n);

	for(int i =0;i<n;i++){
		cin >> arr[i];

		even[i] = !(arr[i]&1);
	}

	for(int i =0;i<n;i++){

		int top_steps = 1;


		int j = i;

		if(j + arr[j] < n && even[j] != even[j+arr[j]]){
			top_steps = 1;
		}else{
			while(j + arr[j] < n && even[j] != even[j+arr[j]]){
				j = j + arr[j];
				top_steps++;
			}


			if(even[j] == even[i]){
				top_steps = INT_MAX;
			}
		}

		int low_steps = 1;

		if(arr[i] - i >= 0 && even[i] != even[i + arr[i]]){
			low_steps = 1;
		}else{
			if(arr[i] - i >= 0){
				low_steps = out[arr[i] - i];
			}else{
				low_steps = INT_MAX;
			}
		}


		int steps = max(low_steps, top_steps);

		if(steps == INT_MAX)
			steps = -1;

		out[i] = steps;
	}


	for(int i =0;i<n;i++){
		cout << out[i] << " ";
	}


	

	system("pause");
	return 0;
}

