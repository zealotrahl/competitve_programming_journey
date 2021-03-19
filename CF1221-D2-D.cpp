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

	int q;


	cin >> q;


	int n;


	long long ans;

	long long a,b;




	while(q--){
		cin >> n;

		vector <pair<long long, long long>> arr(n);


		vector <long long> price(n);

		for(int i =0;i<n;i++){

			cin >> a >> b;

			arr[i] = make_pair(a,b);
		}





		price[n-1] = arr[n-1].second;

		for(int j = 1;j <n;j++){
			if(arr[j].first == arr[j-1].first+1){
				price[j-1] = arr[j-1].second + min(arr[j-1].second, arr[j].second);
			}else{
				price[j-1] = arr[j-1].second;
			}
		}



		long long ans = 0;


		for(int i =1;i<n;i++){
			if(arr[i].first == arr[i-1].first){
				if(price[i-1] < price[i]){
					ans += price[i-1];

					arr[i-1].first++;
				}else{
					ans += price[i];

					arr[i].first++;

					i++;
				}



			}
		}


		cout << ans << endl;




	}
	

	system("pause");
	return 0;
}


