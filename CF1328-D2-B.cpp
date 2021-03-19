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
		int n,k;
		cin >> n >> k;
		vector<char> s(n);
		for(int i =0;i<n;i++)
			s[i] = 'a';

		int current_p = 1;
		int curr_b = 1;
		int c = 0;
		while(current_p != k){
			if(c == curr_b-1){
					curr_b++;
					c = 0;
			}else{
					c++;
			}
			
			current_p++;
		}

		int first_b = n-curr_b -1;
		s[first_b] = 'b';
		s[n-c -1] = 'b';

		string str (s.begin(), s.end());
		cout << str << endl;

	}
	

	system("pause");
	return 0;
}


