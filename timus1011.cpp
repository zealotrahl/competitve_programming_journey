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

	float p,q;

	cin >> p >> q;

	p += 0.01;
	bool flag =false;

	int min_ans = INT_MAX;

	while(p < q){
		int cur_ans = INT_MAX;

		for(int i =1;i<1e5;i++){

			float l = (1.0*i*100)/p;
			int check = int(l*100 - (int)(floor(l))*100);


			if(!check){
				cur_ans = (int)l;
				flag = true;
				break;
			}
		}

		if(flag){

			if(cur_ans < min_ans){
				min_ans = cur_ans;
			}

			flag =false;
		}

		p+= 0.01;
	}

	if(min_ans == INT_MAX)
		min_ans = 0;

	cout << min_ans;
	

	system("pause");
	return 0;
}

