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

	int n, m;

	cin >> n;


	vector <double> a(n);

	for(int i=0;i<n;i++)
		cin >> a[i];

	cin >> m;

	vector <double> b(m);
	for(int i =0;i<m;i++)
		cin >> b[i];

	vector <int> ans;

	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++){
			if(b[j]/a[i] == floor(b[j]/a[i])){
				ans.push_back(b[j]/a[i]);
			}
		}
	}

	sort(ans.rbegin(), ans.rend());

	int out = 1;

	int i = 1;

	while(i < ans.size() && ans[i] == ans[0]){
		out++;

		i++;
	}

	cout << out;

	

	system("pause");
	return 0;
}


