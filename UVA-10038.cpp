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








	int a;

	int n;

	while(cin >> n){

		bool flag = true;

		vector <int> arr(n);

		for(int i =0;i<n;i++){
			cin >> arr[i];
		}


		vector <int> taken(n, 0);


		for(int i =1;i <n;i++){
			a = abs(arr[i] - arr[i-1]);

			

			if(a > n-1){
				continue;
			}

			taken[a] = 1;
		}


		for(int i =1;i<n;i++){
			if(taken[i] == 0){
				flag = false;
				break;
			}
		}


		if(flag){
			cout << "Jolly\n";
		}else{
			cout << "Not jolly\n";
		}

	}



	

	system("pause");
	return 0;
}


