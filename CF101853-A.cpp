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
 ios_base::sync_with_stdio(false);
 cin.tie(NULL);
	int t;
 
	cin >> t;
 
 
	int n,q;
 
	int type,p, v;
 
	int non_zero;
 
	unordered_map <int, int> nums;
 
	int arr[100005];
 
	while(t--){
		cin >> n >> q;
 
 
 
 
		nums.clear();
 
 
 
 
		for(int i =0;i<n;i++){
			cin >> arr[i];
 
			if(arr[i] != 0){
				
				if(nums.count(arr[i]))
					nums[arr[i]]++;
				else
					nums[arr[i]] = 1;
 
			}
		}
 
 
 
		non_zero = nums.size();
 
 
 
 
 
		for(int i =0;i<q;i++){
			cin >> type;
 
 
			if(type == 2){
				cout << non_zero << "\n";
			}else{
				cin >> p >> v;
 
				if(arr[p-1] != 0){
					nums[arr[p-1]]--;
 
					if(nums[arr[p-1]] == 0)
						non_zero--;
				}
 
 
 
				if(v != 0 && (nums.count(v) == 0 || nums[v] == 0)){
					nums[v] = 1;
					non_zero++;
				}else if(v != 0){
					nums[v]++;
				}
 
 
				arr[p-1] = v;
 
			}
		}
 
	}
	
 
	return 0;
}