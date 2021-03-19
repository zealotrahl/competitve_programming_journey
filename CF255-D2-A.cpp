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


	int tr = 0;

	int chest, biceps, back;

	chest = biceps = back =0;

	int a;
	for(int i =0;i<n;i++){
		cin >> a;

		if(tr == 0){
			chest += a;
			tr++;
		}else if(tr == 1){
			biceps += a;
			tr++;
		}else if(tr == 2){
			back += a;
			tr = 0;
		}
	}


	if(chest > biceps && chest > back){
		cout << "chest";
	}else if(biceps > chest && biceps > back){
		cout << "biceps";
	}else{
		cout << "back";
	}

	

	system("pause");
	return 0;
}


