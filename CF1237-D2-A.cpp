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

	vector <pair <int, int>> ans(n);
	int a;


	int flag = false;

	int sum = 0;

	for(int i =0;i<n;i++){
		cin >> a;

		
		if(a == -1){
			flag = 2;
		}else if(a == 1){
			flag = 3;
		}else if(a == 0){
			flag = 4;
		}else{
			if(a&1){
				flag = 1;
			}else{
				flag = 0;
			}
		}




		a /= 2;


		sum += a;

		ans[i] = make_pair(a, flag);
	}


	if(sum != 0){

		for(int i =0;i<n;i++){
			if(sum == 0)
				break;

			if(ans[i].first == 0 && ans[i].second != 4){
				if(ans[i].second == 2 && sum > 0){
					ans[i].first -= 1;
					sum--;
				}else if(ans[i].second == 3 && sum < 0){
					ans[i].first++;
					sum++;
				}
			}else{
				if(ans[i].second == 1){
					if(ans[i].first > 0 && sum < 0){
						ans[i].first++;
						sum++;
					}else if(ans[i].first < 0 && sum > 0){
						ans[i].first--;
						sum--;
					}
				}
			}
		}
	}

	for(int i =0;i<n;i++)
		cout << ans[i].first << "\n";
	

	system("pause");
	return 0;
}


