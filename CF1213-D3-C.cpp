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
	long long n,m;

	long long ans = 0;

	while(q--){

		cin >> n >> m;

		ans = 0;

		long long rounds = n/m;


		vector <int> last_digits;

		int i = 0;

		int last_d = m%10;
		int first_last_d = last_d;


		if(rounds == 0){
			cout << 0 << "\n";
		}else{
			do{
				last_digits.push_back(last_d);
				
				last_d += first_last_d;

				last_d = last_d%10;


				i++;


			}while(last_d != first_last_d && i < rounds);



			long long povtoreniya = rounds/last_digits.size();

			if(povtoreniya == 0){
				for(int i =0;i<rounds;i++){
					ans += last_digits[i];
				}
			}else{

				for(int i =0;i<last_digits.size();i++)
					ans += povtoreniya*last_digits[i];


				if(rounds%last_digits.size() != 0){
					for(int i =0;i<rounds%last_digits.size();i++){
						ans += last_digits[i];
					}
				}
			}


			cout << ans << "\n";

		}




	}
	

	system("pause");
	return 0;
}


