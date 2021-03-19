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

	string s;

	cin >> s;

	bool flag = false;

	string out = "";

	int cur_last = s.length();
	string test = "";

	int n = s.length();
	for(int j = 0;j<n;j++){
		int p = s[j] - '0';

		if(p%8 == 0){
			flag = true;
			out += s[j];
			break;
		}
	}

	if(!flag){
		for(int i =0;i<n;i++){
			for(int j = i+1;j<n;j++){
				test = s[i];
				test += s[j];

				int p = stoi(test);

				if(p%8 == 0){

					flag = true;
					out.assign(test,0,2);
					break;
				}
			}
			if(flag){
				break;
			}
		}
	}

	if(!flag){
		for(int i =0;i<n;i++){
			for(int j = i+1;j<n;j++){
				for(int k = j+1;k<n;k++){
					test = s[i];
					test += s[j];
					test += s[k];
					int p = stoi(test);
					if(p%8 == 0){
						flag = true;
						out.assign(test,0,3);
						break;
					}
				}

				if(flag){
					break;
				}
			}
			if(flag){
				break;
			}
		}

	}

	if(flag){
		cout << "YES\n";
		cout << out;
	}else{
		cout << "NO\n";
	}
	

	system("pause");
	return 0;
}

