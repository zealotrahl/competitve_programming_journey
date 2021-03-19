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

	string s;
	cin >> s;

	int n = s.size();
	int small, big;
	small = big = 0;


	for(int i =0;i<n;i++){
		if(s[i] < 97)
			big++;
		else
			small++;
	}

	if(small >= big){
		for(int i =0;i<n;i++){
			if(s[i] < 97){
				s[i] = s[i] + 32;
			}
		}
	}else{
		for(int i =0;i<n;i++){
			if(s[i] >= 97){
				s[i] = s[i] - 32;
			}
		}
	}

	cout << s;
	

	system("pause");
	return 0;
}


