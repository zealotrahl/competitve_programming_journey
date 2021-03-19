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



	vector <vector <int>> arr(3);

	vector <int> count(3,0);

	int a;
	for(int i =0;i<n;i++){
		cin >> a;

		a--;

		arr[a].push_back(i+1);

		count[a]++;

	}

	int siz = *min_element(count.begin(), count.end());

	cout << siz << endl;

	for(int i =0;i<siz;i++){
		cout << arr[0][i] << " " << arr[1][i] << " " << arr[2][i] << endl;
	}



	

	system("pause");
	return 0;
}


