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

	int n,k;

	cin >> n >> k;


	int dolki = n*k;
	
	set <int> vzyal;
	vector <vector <int>> deti(k);

	int a;

	for(int i =0;i<k;i++){
		cin >> a;

		vzyal.insert(a);

		deti[i].push_back(a);
	}





	for(int i =1;i<=n*k;i++){
		if(vzyal.count(i))
			continue;


		for(int j=0;j<k;j++){
			if(deti[j].size() <n){
				deti[j].push_back(i);
				break;
			}
		}
	}

	for(int i =0;i<k;i++){
		for(int j =0;j<n;j++){
			cout << deti[i][j] << " ";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}


