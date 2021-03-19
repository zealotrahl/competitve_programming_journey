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

	cin >> n;

	string s;

	cin >> s;

	int ans = 0;

	vector <int> arr;

	bool valid = true;

	int count_w;
	int count_b;

	count_b = count_w = 0;

	for(int i =0;i<n;i++){
		if(s[i] == 'W'){
			count_w++;
		}else{
			count_b++;
		}
	}






	if(((count_b&1) && (count_w&1)) || ans > 3*n){
		valid = false;
	}


	if(!valid){
		cout << -1;
	}else{


		for(int i =0;i<count_b;i++){
			if(s[i] == 'W'){
				s[i] = 'B';

				if(s[i+1] == 'W')
					s[i+1] = 'B';
				else
					s[i+1] = 'W';
				ans++;
				arr.push_back(i+1);
			}
		}

		for(int i =n-1;i>count_b;i--){
			if(s[i] == 'B'){
				s[i] = 'W';

				if(s[i-1] == 'W')
					s[i-1] = 'B';
				else
					s[i-1] = 'W';
				ans++;
				arr.push_back(i);
			}
		}


		if(!(count_b&1) && !(count_w&1)){
			for(int i =0;i<n-1;i++){
				if(s[i] == 'B'){
					s[i] = 'W';
					s[i+1] = 'W';
					ans++;
					arr.push_back(i+1);
				}
			}
		}else if(count_w&1){
			for(int i =0;i<n-1;i++){
				if(s[i] == 'B'){
					s[i] = 'W';
					s[i+1] = 'W';
					ans++;
					arr.push_back(i+1);
				}
			}
		}else if(count_b&1){
			for(int i =0;i<n-1;i++){
				if(s[i] == 'W'){
					s[i] = 'B';
					s[i+1] = 'B';
					ans++;
					arr.push_back(i+1);
				}
			}
		}


		if(ans > 3*n){
			cout << -1;
		}else{
			cout << ans << endl;

			for(int i =0;i<arr.size();i++)
				cout << arr[i] << " ";
		}

	}

	system("pause");
	return 0;
}


