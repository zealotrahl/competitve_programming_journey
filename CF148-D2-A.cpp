#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers



bool sito[100005];
int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int k,l,m,n,d;

	cin >> k >> l >> m >> n >> d;

	set <int> mp;

	mp.insert(k);
	mp.insert(l);
	mp.insert(m);
	mp.insert(n);

	int count = 0;


	vector <int> nums;

	for(int x : mp)
		nums.push_back(x);

	set <int> brak;

	for(int i =0;i<nums.size();i++){

		if(brak.count(nums[i]))
			continue;

		for(int j =i+1;j<nums.size();j++){
			if(nums[j]%nums[i] == 0){
				brak.insert(nums[j]);
			}
		}
	}



	for(int i =0;i<nums.size();i++){
		if(brak.count(nums[i]))
			continue;

		for(int j = nums[i];j<=d;j+=nums[i]){
			if(sito[j])
				continue;
			sito[j] = true;
			count++;
		}
	}

	cout << count;

	

	system("pause");
	return 0;
}


