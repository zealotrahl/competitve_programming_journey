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
	vector <int> arr_a(n);
	vector <int> arr_b(n);
	vector <int> sorted_a(n);
	for(int i =0;i<n;i++){
		cin >> arr_a[i];
	}
	for(int i =0;i<n;i++){
		cin >> arr_b[i];
	}
	for(int i =0;i<n;i++){
		sorted_a[i] = (arr_a[i] - arr_b[i]);
	}

	sort(sorted_a.begin(), sorted_a.end());

	long long counter = 0;

	std::vector<int>::iterator low;
	int pos;
	int el_num;

	for(int i =0;i<n;i++){
		if (sorted_a[i] <= 0){
			continue;
		}

		int min_val = -sorted_a[i] + 1;
		low = std::lower_bound(sorted_a.begin(), sorted_a.end(), min_val);
		pos = (low - sorted_a.begin());
		counter += i-pos;
	}

	cout << counter << endl;

	system("pause");
	return 0;
}


