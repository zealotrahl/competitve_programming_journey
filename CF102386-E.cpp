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

	int n,k;

	cin >> n >> k;

	vector <int> ans(n);

	map <int, int> checker;

	set <int> indx;


	int a;

	for(int i =0;i<n;i++){
		cin >> a;

		if(checker[a]){
			indx.erase(checker[a]);
			ans[checker[a]-1] = 0;
		}

		checker[a] = i+1;
		indx.insert(i+1);

		ans[i] = a;
	}


	for(int i =0;i<n;i++){
		auto pos = indx.find(i+1);

		if(pos == indx.end()){
			cout << 0 << " ";
		}else{
			cout << ans[*pos-1] << " ";
		}
	}
	

	system("pause");
	return 0;
}


