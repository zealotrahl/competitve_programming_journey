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
	vector <int> sort_arr(n);

	int a;
	for(int i =0;i<n;i++){
		cin >> a;


		arr[i] = a;
		sort_arr[i] = a;
	}


	sort(sort_arr.rbegin(), sort_arr.rend());





	int max_indx = 0;

	set <int> used;

	for(int i =0;i<n;i++){
		string s = "";


		used.insert(arr[i]);

		while(used.count(sort_arr[max_indx])){
			s += to_string(sort_arr[max_indx]);
			s+= " ";

			max_indx++;
		}


		if(s == "")
			s = " ";

		cout << s << "\n";
	}



	

	system("pause");
	return 0;
}


