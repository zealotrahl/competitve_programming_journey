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

	string s;

	cin >> s;

	int k = 0;

	vector <int> ans;

	for(int i =0;i<n;i++){
		if(s[i] == 'B'){
			k++;

			int a = 0;

			while(s[i] == 'B'){
				a++;

				i++;
			}
			ans.push_back(a);

			i-1;
		}
	}
	

	cout << k << "\n";
	for(int i =0;i<k;i++)
		cout << ans[i] << " ";

	system("pause");
	return 0;
}


