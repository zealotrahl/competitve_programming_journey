#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


bool cmp(pair <int,int> a, pair<int,int> b){
	if(a.first == b.first){
		return a.second > b.second;
	}else{
		return a.first < b.first;
	}
}

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,k;

	cin >> n >> k;

	vector <pair<int,int>> arr(n);

	for(int i =0;i<n;i++)
		cin >> arr[i].first >> arr[i].second;

	sort(arr.rbegin(), arr.rend(), cmp);

	k--;

	int a,b;

	int ans = 1;

	a = arr[k].first;
	b = arr[k].second;


	for(int i =k+1;i<n;i++){
		if(arr[i].first == a && arr[i].second == b){


			ans++;
		}else{
			break;
		}
	}

	for(int i =k-1;i>=0;i--){
		if(arr[i].first == a && arr[i].second == b){

			ans++;
		}else{
			break;
		}
	}


	cout << ans;
	

	system("pause");
	return 0;
}

