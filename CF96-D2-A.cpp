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

	bool flag = false;
	int counter = 0;

	for(int i =0;i<s.length();i++){
		if(s[i] == '1'){
			counter = 0;
			while(i < s.length() && s[i] == '1'){
				i++;
				counter++;

				if(counter == 7)
					break;
			}
			i--;

			if(counter >= 7){
				flag= true;
				break;
			}
		}else{
			counter = 0;
			while(i < s.length() && s[i] == '0'){
				i++;
				counter++;

				if(counter == 7)
					break;
			}
			i--;

			if(counter >= 7){
				flag= true;
				break;
			}
		}
	}

	if(flag){
		cout << "YES";
	}else{
		cout << "NO";
	}
	

	system("pause");
	return 0;
}

