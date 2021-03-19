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

	set <int> ab;

	set <int> ba;

	int n = s.length();
	for(int i =0;i<n-1;i++){
		if(s[i] == 'A' && s[i+1] == 'B'){
			ab.insert(i);
		}else if(s[i] == 'B' && s[i+1] == 'A'){
			ba.insert(i);
		}
	}

	bool ab_f = true;
	bool ba_f = true;
	int w_a = 0;
	for(int x : ab){
		if(ba.count(x+1) || ba.count(x-1)){
			w_a++;
		}
	}



	int w_b = 0;
	for(int x : ba){
		if(ab.count(x+1) || ab.count(x-1)){
			w_b++;
		}
	}


	if(((w_a + w_b < ab.size() + ba.size()) || (ab.size() > 1 && ba.size() > 1)) && (ab.size() && ba.size())){
		ab_f = true;
		ba_f = true;
	}else{
		ab_f = false;
		ba_f = false;
	}

	if(!ab_f || !ba_f){
		cout << "NO\n";
	}else{
		cout << "YES\n";
	}


	

	system("pause");
	return 0;
}
