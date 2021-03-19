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

	int n;

	cin >> n;

	int count_zeros = 0;
	int count_fives = 0;

	int a;

	for(int i =0;i<n;i++){
		cin >> a;

		if(a == 5){
			count_fives++;
		}else{
			count_zeros++;
		}
	}

	if(count_zeros == 0){
		cout << -1;
	}else{

		string out = "";

		if(count_fives == 0){
			out = "0";
		}else{
			int nine_fives = count_fives/9;

			for(int i =0;i<nine_fives;i++){
				out += "555555555";
			}

			if(out == ""){
				out = "0";
			}else{
				while(count_zeros > 0){
					out += "0";
					count_zeros--;
				}
			}
		}

		cout << out;
	}
	

	system("pause");
	return 0;
}


