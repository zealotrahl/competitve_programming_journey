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
		int n0,n1,n2;
		cin >> n0 >> n1 >> n2;

		string s = "";
		if(n2 > 0){
			n2--;
			s = "11";
			while(n2-- > 0){
				s += "1";
			}
		}

		if(n0 > 0){
			if(s.size())
				n1--;

			s += "00";
			n0--;
			while(n0-- >0){
				s += "0";
			}
			bool flag = true;
			while(n1-- > 0){
				if(flag){
					s += "1";
				} else{
					s += "0";
				}
				flag = !flag;
			}
		}

		if(n1 > 0){
			bool flag = false;
			if(s.size()){
				s += "0";
				flag = true;
			} else {
				s += "01";
				flag =false;
			}
			n1--;

			while(n1-- > 0){
				if(flag){
					s += "1";
				} else{
					s += "0";
				}
				flag = !flag;
			}
		}

		cout << s << endl;

	}


	return 0;
}


