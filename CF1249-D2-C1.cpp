#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


bool nums[20002];


int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	vector <int> just(20);

	for(int i =0;i<20002;i++){
		just.clear();

		int k = i;
		int j = 0; 
		while (k > 0) { 
			just[j] = k % 3; 
			k = k / 3; 
			j++; 
		}

		bool flag = true;
		for(int p = 0;p<20;p++){
			if(just[p] == 2){
				flag = false;
				break;
			}
		}
		
		nums[i] = flag;
	}

	int q;
	cin >> q;
	while(q--){
		int n;
		cin >> n;

		int ans = 0;
		for(int i = n;i<20002;i++){
			if(nums[i]){
				ans = i;
				break;
			}
		}
		cout << ans << endl;
	}
	

	system("pause");
	return 0;
}


