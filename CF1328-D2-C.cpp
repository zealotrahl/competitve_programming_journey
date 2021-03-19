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
		string s;
		cin >> s;

		vector <char> a(n);
		vector <char> b(n);

		int i;
		for(i =0;i<n;i++){
			if(s[i] == '1'){
				a[i] = '1';
				b[i] = '0';
				i++;
				break;
			}
			if(s[i] == '2'){
				a[i] = '1';
				b[i] = '1';
			}else{
				a[i] = '0';
				b[i] = '0';
			}
		}

		for(;i<n;i++){
			a[i] = '0';
			b[i] = s[i];
		}

		string str_a (a.begin(), a.end());
		string str_b (b.begin(), b.end());

		cout << str_a << endl;
		cout << str_b << endl;
	}
	

	system("pause");
	return 0;
}


