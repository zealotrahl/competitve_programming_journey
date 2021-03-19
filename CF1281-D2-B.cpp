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
		string s,c;

		cin >> s >> c;


		if(s < c){
			cout << s << endl;
			continue;
		}

		bool flag =false;

		for(int i =0;i<s.size();i++){
			for(int j = 0;j<s.size();j++){
				if(i == j){
					continue;
				}

				if(s[i] >= s[j])
					continue;
				
				swap(s[i], s[j]);

				if(s < c){
					flag = true;
					break;
				}
				swap(s[i], s[j]);

			}

			if(flag){
				break;
			}
		}

		if(flag){
			cout << s << endl;
		}else{
			cout << "---" << endl;
		}
	}
	

	system("pause");
	return 0;
}



