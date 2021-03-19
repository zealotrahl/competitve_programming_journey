#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


int main() {
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);


	int t;
	cin >> t;

	while (t--){
		int n;
		cin >> n;



		vector <pair<int, int>> a_b(n);
		vector <pair<int, int>> b_a(n);

		int a,b;

		for (int i = 0; i < n; i++){
			cin >> a >> b;

			a_b[i] = make_pair(a,b);

			b_a[i] = make_pair(b,a);
		}

		int x,y;

		x = a_b[0].first;
		y = a_b[0].second;

		bool flag = true;

		for(int i =0;i<n;i++){
			int beg = min(y, a_b[i].second);
			int end = max(x, a_b[i].first);

			if(beg - end >= 0){
				x = end;
				y = beg;
			}else{
				flag = false;
				break;
			}

		}


		sort(a_b.rbegin(), a_b.rend());

		x = a_b[0].first;

		sort(b_a.begin(), b_a.end());

		y = b_a[0].first;

		if (flag){
			cout << 0 << endl;
			continue;
		}

		cout << abs(x-y) << endl;
		
	}

	system("pause");

	return 0;
}