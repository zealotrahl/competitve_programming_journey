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

	int p,q,l,r;


	cin >> p >> q >> l >> r;

	vector <pair<int,int>> first(p);

	vector <pair<int,int>> second(q);

	for(int i =0;i<p;i++){
		cin >> first[i].first >> first[i].second;
	}

	for(int i =0;i<q;i++)
		cin >> second[i].first >> second[i].second;





	set <int> ans;

		for(int j = 0;j<p;j++){
			for(int k = 0;k<q;k++){
				for(int i = l;i<=r;i++){
					int s_f = second[k].first + i;
					int s_s = second[k].second + i;

					int f_f = first[j].first;
					int f_s = first[j].second;

					if((s_s >= f_f && s_s <= f_s) || (s_f >= f_f && s_f <= f_s) || (f_f >= s_f && f_s <= s_s)){
						ans.insert(i);
					}
				}
			}

		}




	cout << ans.size();
	

	system("pause");
	return 0;
}


