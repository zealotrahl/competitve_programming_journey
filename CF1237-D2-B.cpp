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


	vector <int> in(n);

	for(int i =0;i<n;i++){
		cin >> in[i];
	}

	vector <int> out(n);

	int arr[n+1];



	for(int i =0;i<n;i++){
		cin >> out[i];

		arr[out[i]] = i;
	}


	int counter = 0;





	for(int i =1;i<n;i++){


		int must_be = in[i-1];


		if(arr[in[i]] < i)
			counter++;

		if(arr[in[i]] < arr[must_be])
			counter++;
	}

	if(counter != 0)
		counter--;




	cout << counter;
	

	system("pause");
	return 0;
}


