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


		vector <pair<char, char>> arr(n);

		vector <string> s_arr(n);

		string p;

		for(int i =0;i<n;i++){
			cin >> p;

			int a,b;

			if(p.size() == 1){
				a = b = p[0];
			}else{
				a = p[0];
				b = p[s.size()-1];
			}

			arr[i] = make_pair(a,b);

			s_arr[i] = p;
		}



	}
	

	system("pause");
	return 0;
}


