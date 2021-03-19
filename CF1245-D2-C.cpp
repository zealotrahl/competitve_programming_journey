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
	long long ans = 1;

	bool flag = false;

	for(int i = 0;i<s.size();i++){
		if(s[i] == 'm' || s[i] =='w'){
			flag =true;
			break;
		}


		if(s[i] == 'u' && i != n-1 && s[i+1] == 'u'){
			ans *= 2;
			i++;
			continue;
		}

		if(s[i] == 'n' && i != n-1 && s[i+1] == 'n'){
			ans *= 2;
			i++;
			continue;
		}
	}

	if(flag){
		cout << 0;
	}else{
		cout << ans;
	}
	

	system("pause");
	return 0;
}


