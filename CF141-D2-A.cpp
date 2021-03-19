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

	string s1,s2,s3;

	cin >> s1 >> s2 >> s3;


	if(s3.size() != (s2.size() + s1.size())){
		cout << "NO";

	}else{
		map <char,int> mp;

		for(int i =0;i<s3.size();i++){
			
			if(mp.count(s3[i]))
				mp[s3[i]]++;
			else
				mp[s3[i]] = 1;
		}

		bool flag = true;
		for(int i =0;i<s1.size();i++){
			if(!mp.count(s1[i])){
				flag =false;
				break;
			}else{
				mp[s1[i]]--;
			}
		}


		if(flag){
			for(int i =0;i<s2.size();i++){
				if(!mp.count(s2[i])){
					flag = false;
					break;
				}else{
					mp[s2[i]]--;
				}
			}
		}

		if(flag){
			for(auto x : mp){
				if(x.second != 0){
					flag =false;
					break;
				}
			}
		}

		if(flag)
			cout << "YES";
		else
			cout << "NO";


	}

	system("pause");
	return 0;
}


