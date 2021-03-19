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

	string a;

	cin >> a;


	if(a[k] > a[0]){
		a[k] = a[0];

		for(int j = k-1;j>0;j--){
			if(a[j] == '9'){
				a[j] = '0';
			}else{
				a[j]++;
				break;
			}
		}
	}

	for(int i = k;i<n;i++){
		a[i] = a[i-k];
	}

	cout << a.size() << endl;
	cout << a;

	

	system("pause");
	return 0;
}


