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


	vector <pair<int, int>> banki(n);

	int a;

	for(int i=0;i<n;i++){
		cin >> a;

		banki[i] = make_pair(a, i+1);

	}



	sort(banki.begin(),banki.end());


	long long ans =0;
	int x = 0;


	for(int i=n-1;i>=0;i--){
		ans += (banki[i].first*x + 1);


		x++;
	}

	cout << ans << endl;

	for(int i= n-1;i>=0;i--){
		cout << banki[i].second << " ";
	}



	system("pause");
	return 0;
}


