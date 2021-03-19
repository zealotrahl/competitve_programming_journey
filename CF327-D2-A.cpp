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

	vector <int> arr(n);
	for(int i =0;i<n;i++)
		cin >> arr[i];

	int ans = 0;

	for(int c=0;c<n;c++){
		if(arr[c] == 1)
			ans++;
	}

	int initial = ans;
	ans = 0;
	for(int i =0;i<n;i++){
		for(int k=i;k<n;k++){
			int current = initial;
			for(int j = i;j<=k;j++){
				if(arr[j] == 1){
					current--;
				}else{
					current++;
				}
			}
			ans = max(ans,current);
		}
	}

	cout << ans;
	

	system("pause");
	return 0;
}

