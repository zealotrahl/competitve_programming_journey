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

	int q;

	cin >> q;

	while(q--){
		string s;

		cin >> s;

		int n = s.size();

		string out = "";

		int u,d,r,l;

		u = d = r = l = 0;

		for(int i =0;i<n;i++){
			if(s[i] == 'U')
				u++;
			else if(s[i] == 'D')
				d++;
			else if(s[i] == 'R')
				r++;
			else if(s[i] == 'L')
				l++;
		}

		u = min(d,u);
		d = u;

		r = min(r,l);
		l = r;
		bool even = true;

		// cout << u << " " << d << " " << r << " " << l << endl;


		if(u == 0 && r > 1){
			r = 1;
			l = 1;
		}

		if(r == 0 && u > 1){
			u =1;
			d = 1;
		}

		if((u == 1 && r == 0) || (r == 1 && u == 0)){
			while(u || d){
				if(even){
					out += "U";
					u--;
				}
				else{
					out += "D";
					d--;
				}
				even = !even;

			}

			even = true;

			while(l || r){
				if(even){
					out += "R";
					r--;
				}
				else{
					out += "L";
					l--;
				}

				even = !even;
			}
		}else{
			if(u == 0 || r == 0){
				cout << 0 << endl;
				cout << endl;
				continue;
			}else{

				while(r){

					out += "R";
					r--;
				}

				while(u){
					out += "U";
					u--;
				}

				while(l){
					out += "L";
					l--;
				}

				while(d){
					out += "D";
					d--;
				}

			}
		}



		cout << out.size() << endl;
		cout << out << endl;

	}
	

	system("pause");
	return 0;
}


