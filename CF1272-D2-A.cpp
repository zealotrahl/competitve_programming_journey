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
		long long a,b,c;

		vector <long long> arr(3);

		cin >> arr[0];
		cin >> arr[1];
		cin >> arr[2];

		sort(arr.begin(), arr.end());

		a = arr[0];
		b = arr[1];
		c = arr[2];


		if(a == b && b == c){
			cout << 0 << endl;
		}else{

			if(a == b && c > b){
				a++;
				b++;

				if(c > b)
					c--;
			}else{
				if(a < b){
					a++;
				}

				if(a < b){
					b--;
					c--;
				}else{

					if(c > b)
						c--;
				}
			}


			long long d1 = abs(a-b);


			long long d2 = abs(b-c);


			cout << d1 + d2 + abs(a-c) << endl;
		}



	}
	

	system("pause");
	return 0;
}


