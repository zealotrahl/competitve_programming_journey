#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


vector <int> cuts;
int ans;

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,b;
	cin >> n >> b;
	
	vector <int> arr(n);
	for(int i=0;i<n;i++)
		cin >> arr[i];

	int ct = 0;

	if(arr[0]&1)
		ct++;
	else
		ct--;

	for(int i = 1;i<n;i++){
		if(ct == 0){
			cuts.push_back(abs(arr[i] - arr[i-1]));
		}

		if(arr[i]&1){
			ct++;
		}else{
			ct--;
		}
	}

	sort(cuts.begin(), cuts.end());


	for(int i = 0; i < (int)cuts.size(); i++) {
	    if(cuts[i] <= b) {
	        b -= cuts[i];
	        ans++;
	    }
	}

		cout << ans;
	


	system("pause");
	return 0;
}


