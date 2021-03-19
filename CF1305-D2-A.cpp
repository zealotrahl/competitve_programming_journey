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

		vector <int> ozhe(n);
		vector <int> bras(n);

		for(int i =0;i<n;i++)
			cin >> ozhe[i];

		for(int i=0;i<n;i++)
			cin >> bras[i];

		sort(ozhe.begin(), ozhe.end());
		sort(bras.begin(), bras.end());

		for(int i=0;i<n;i++)
			cout << ozhe[i] << " ";

		cout << endl;

		for(int i=0;i<n;i++)
			cout << bras[i] << " ";

		cout << endl;
	}
	

	system("pause");
	return 0;
}


