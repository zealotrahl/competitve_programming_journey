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

	int n;

	cin >> n;

	string st;

	cin >> st;

	bool flag = false;

	int s = -1;
	int t = -1;


	for(int i =0;i<n;i++){
		if(st[i] == 'R' && st[i] == 'L'){
			cout << i+1 << " " << i+2;
			flag = true;
			break;
		}
	}

	if(!flag){

		for(int i =n-1;i>= 0;i--){
			if(st[i] == 'R'){
				cout << i+1 << " " << i+2;
				flag =true;
				break;
			}
		}
	}

	if(!flag){
		for(int i =0;i<n;i++){
			if(st[i] == 'L'){
				cout << i+1 << " " << i;
				break;
			}
		}
	}



	

	system("pause");
	return 0;
}


