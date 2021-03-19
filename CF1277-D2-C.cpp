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

	int t;

	cin >> t;

	while(t--){
		string s;

		cin >> s;

		int n = s.size();
		int ans = 0;

		vector <int> arr;

		set <int> invalid;

		for(int i =0;i<n-4;i++){
			if(s[i] == 't' && s[i+1] == 'w' && s[i+2] == 'o' && s[i+3] == 'n' && s[i+4] == 'e'){
				arr.push_back(i+2);
				ans++;
				s[i+2] = '$';
			}
		}

		for(int i =0;i<n-2;i++){

			if(invalid.count(i))
				continue;

			if(s[i] == 't' && s[i+1] == 'w' && s[i+2] == 'o'){
				ans++;

				int index = i + 1;

				arr.push_back(index);
				invalid.insert(index);

			}

			if(s[i] == 'o' && s[i+1] == 'n' && s[i+2] == 'e'){
				ans++;

				int index = i+1;
				arr.push_back(index);
				invalid.insert(index);
			}
		}

		cout << ans << endl;
		for(int i =0;i<ans;i++)
			cout << arr[i]+1 << " ";

		cout <<endl;
	}

	

	system("pause");
	return 0;
}


