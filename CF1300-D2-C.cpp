#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


bool isKthBitSet(int n, int k) 
{ 
    if (n & (1 << (k - 1))) 
       	return true; 
    else
        return false;
} 

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

	vector <int> ones(32,0);

	for(int i =0;i<32;i++){
		for(int j=0;j<n;j++){
			if(isKthBitSet(arr[j], i)){
				ones[i]++;
			}
		}
	}

	int max_ones = INT_MIN;
	int max_el = -1;
	for(int i =0;i<n;i++){
		int cur_ones = 0;

		for(int j=0;j<32;j++){
			if(isKthBitSet(arr[i], j) && ones[j] == 1){
				cur_ones += (1 << j);
			}
		}

		if(cur_ones >= max_ones){
			max_ones = cur_ones;
			max_el = arr[i];
		}
	}

	cout << max_el << " ";
	bool once = false;

	for(int i =0;i<n;i++){
		if(arr[i] == max_el && !once){
			once = true;
			continue;
		}

		cout << arr[i] << " ";
	}
	

	system("pause");
	return 0;
}
