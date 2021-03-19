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

	int a,g;

	string out = "";

	int a_m = 0;
	int g_m = 0;

	vector <tuple<int,int,bool>> arr(n);
	for(int i =0;i<n;i++){
		cin >> a >> g;

		int diff = a-g;

		if(diff < 0){
			a_m += abs(diff);

			arr[i] = (make_tuple(abs(diff),i, true));
		}else{
			g_m += abs(diff);

			arr[i] = (make_tuple(abs(diff), i,false));
		}
	}

	sort(arr.begin(), arr.end());

	bool flag =false;

	if(abs(a_m - g_m) > 500){

		cout<< a_m - g_m << endl;
		if(a_m > g_m){

			for(int i =0;i<n;i++){

				if(get<2>(arr[i])){
					a_m -= get<0>(arr[i]);
					g_m += get<0>(arr[i]);

					get<2>(arr[i]) = false;

				}

				if(a_m < g_m){
					flag = true;
					break;
				}

			}

		}else{

			for(int i =0;i<n;i++){

				if(!get<2>(arr[i])){
					a_m += get<0>(arr[i]);
					g_m -= get<0>(arr[i]);

					get<2>(arr[i]) = true;
				}

				if(a_m > g_m){
					flag = true;
					break;
				}
			}

		}
	}else{
		flag = true;
	}


	if(!flag){
		cout << -1;
	}else{
		for(int i =0;i<n;i++){

			for(int j = 0;j<n;j++){
				if(get<1>(arr[j]) == i){

					if(get<2>(arr[j])){
						cout << 'A';
					}else{
						cout << 'G';
					}

					break;
				}
			}
			
		}
	}


	

	system("pause");
	return 0;
}


