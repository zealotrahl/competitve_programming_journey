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
		int n,x;

		cin >> n >> x;


		string s;
		cin >> s;


		long long zeros = 0;
		long long ones = 0;
		bool flag =true;



		long long counter = 0;

		for(int i =0;i<n;i++){
			if(s[i] == '0'){
				zeros++;
			}else{
				ones++;
			}
		}

		if(abs(zeros - ones) <= abs(x) && ((zeros - ones <= 0 && x <= 0) || (zeros - ones >= 0 && x >= 0))){

			long long in_zeros = zeros;
			long long in_ones = ones;


			long long pointer = (int)ceil((1.0*abs(x))/abs(zeros-ones));

			if(pointer < 2)
				pointer++;



			zeros = in_zeros*(pointer-1);
			ones = in_ones*(pointer-1);



			for(int j =0;j<n;j++){
				bool changed = false;
				for(int i =0;i<n;i++){
					if(s[i] == '0'){
						zeros++;
					}else{
						ones++;
					}

					if(zeros - ones == x){
						counter++;
						changed = true;
					}
				}

				if(!changed){
					flag = false;
					break;
				}

			}


		}else{
			flag = false;


			for(int i =0;i<n;i++){
				if(s[i] == '0'){
					zeros++;
				}else{
					ones++;
				}

				if(zeros - ones == x){
					counter++;
				}
			}
		}
		

		if(x == 0){
			counter++;
		}

		if(flag)
			counter = -1;

		cout << counter << endl;
	}
	

	system("pause");
	return 0;
}


