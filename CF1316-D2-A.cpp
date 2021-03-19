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
		int n,m;

		cin >> n >> m;

		vector <int> stud(n);


		for(int i =0;i<n;i++){
			cin >> stud[i];
		}


		long long sum = 0;

		for(int i =1;i<n;i++){
			sum += stud[i];
		}

		int dif = m - stud[0];

		if(sum == 0){
			stud[0] = stud[0];
		}else if(dif > sum){
			stud[0] += sum;
		}else{
			stud[0] = m;
		}

		cout << stud[0] << endl;
	}
	

	system("pause");
	return 0;
}


