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


	int d = 50;

	vector <bool> prime(d+1,true);
	
	prime[0] = prime[1] = false;

	for(int i = 2;i<=d;i++){
		if(prime[i]){
			if(i*1ll*i <= d){
				for(int j = i*i; j<= d; j+= i){
					prime[j] = false;
				}
			}
		}
	}

	int n,m;

	cin >> n >> m;


	if(!prime[m]){
		cout << "NO";
	}else{

		for(int i = m-1;i>=0;i--){
			if(prime[i]){



				if(i == n){
					cout << "YES";
					break;
				}else{
					cout << "NO";
					break;
				}
			}
		}

	}

	system("pause");
	return 0;
}


