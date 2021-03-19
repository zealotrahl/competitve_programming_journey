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


		if(n < 10){
			cout << n << endl;
			continue;
		}


		long long ans = 9;

		string s = to_string(n);

		for(int i = 1; i< 9;i++){
			int tens = pow(10,i);

			int tens_num = n/tens;

			if(tens_num > 9)
				ans += 9;
			else{

				bool flag = true;

				int num = s[0] - '0';

				for(int j =1;j<s.size();j++){

					if(s[j] - '0' > num)
						break;
					
					if((s[j]-'0') < num){

						flag = false;
						break;
					}
				}

				
				if(!flag)
					num--;

				ans += num;


				break;
			}
		}


		cout << ans << endl;

	}
	

	system("pause");
	return 0;
}


