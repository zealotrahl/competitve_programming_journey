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
		long long n,s,k;

		cin >> n >> s >> k;

		set <long long> st;


		bool flag =false;

		long long a;

		for(long long i =0;i<k;i++){
			cin >> a;

			st.insert(a);
		}


		if(!st.count(s)){
			cout << 0 << endl;
			continue;
		}
		long long i =s+1;
		long long right_go = INT_MAX;
		for(;i<=n;i++){

			if(!st.count(i)){
				right_go = i - s;
				break;
			}
		}



		long long left_go = INT_MAX;
		i = s-1;
		for(;i>0;i--){
			if(!st.count(i)){
				left_go = abs(i-s);
				break;
			}
		}



		cout << min(left_go, right_go) << endl;
	}
	

	system("pause");
	return 0;
}



