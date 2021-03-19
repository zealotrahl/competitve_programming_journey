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
 
	long long m;
 
 
	cin >> n >> m;
	vector <long long> a_arr(n);
	vector <long long> b_arr(n);
 
	for(int i =0;i<n;i++)
		cin >> a_arr[i];
 
	for(int i =0;i<n;i++)
		cin >> b_arr[i];
 
 
	vector <long long> check_arr(n);
 
 
	bool flag = true;
 
 
 
	long long ans = INT_MAX;
 
	vector <long long> candidates(n);
 
	for(int i =0;i<n;i++){
		candidates[i] = (long long) (b_arr[0] - a_arr[i]+m)%m;
	}
 
	sort(b_arr.begin(), b_arr.end());
	for(int i =0;i<n;i++){
		for(int p = 0;p<n;p++){
			check_arr[p] = (a_arr[p]+candidates[i])%m;
		}
 
		sort(check_arr.begin(), check_arr.end());
 
		flag = true;
		for(int p = 0;p<n;p++){
			if(check_arr[p] != b_arr[p]){
				flag = false;
				break;
			}
		}
 
		if(flag){
			ans = min(ans,candidates[i]);
			break;
		}
	}
 
	cout << ans;
	
 
 
	return 0;
}