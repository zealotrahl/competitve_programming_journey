#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


void displayRes(int g,int s, int b){
	cout << g << " " << s << " " << b << endl;
}

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

		vector <int> arr(n);


		for(int i =0;i<n;i++){
			cin >> arr[i];
		}

		if(n < 6){
			displayRes(0,0,0);
		}else{

			int g,s,b;

			g = s = b =0;

			bool flag = true;

			int f_p = arr[0];

			int i = 0;

			int max_medals = n/2;

			while(arr[i] == f_p && i < n){
				g++;
				i++;
			}



			max_medals -= g;

			if(i == n-1 || max_medals <= 1){
				displayRes(0,0,0);
				continue;
			}



			int count_g = g;

			int last_s = arr[i];

			while(count_g >= 0 && i < n){


				count_g--;
				s++;
				last_s = arr[i];
				i++;
			}

			while(last_s == arr[i] && i < n){
				i++;
				s++;
			}


			max_medals -= s;

			b = max_medals;

			i += b;

			if(i > n - 1){
				i = n-1;
				b -= abs(b - n)+1;
			}

			int last_b = arr[i];

			while(arr[i] == last_b){
				i--;
				b--;
			}
			b++;

			if(s <= g || b <= g){
				displayRes(0,0,0);
				continue;
			}


			displayRes(g,s,b);

		}



	}
	

	system("pause");
	return 0;
}

