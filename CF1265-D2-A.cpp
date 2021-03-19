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
		string s;
		cin >> s;

		int n = s.size();


		char last_char = '-';

		bool impos = false;


		for(int i =0;i<n;i++){

			if(s[i] == '?'){

				if(last_char == '-'){
					last_char = 'a';
				}else{
					if(last_char == 'c')
						last_char = 'a';
					else
						last_char++;
				}

				if(i != n-1 && s[i+1] == last_char){
					if(last_char == 'c')
						last_char = 'a';
					else
						last_char++;
				}

				s[i] = last_char;
			}else{

				if(i != n-1 && s[i] == s[i+1]){
					impos = true;
					break;
				}

			}



			last_char = s[i];
		}

		if(impos){
			cout << -1 << endl;
		}else{
			cout << s << endl;
		}

	}
	

	system("pause");
	return 0;
}


