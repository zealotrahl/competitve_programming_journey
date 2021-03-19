#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers



int mat[2][100005];

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,q;

	cin >> n >> q;

	
	vector <bool> ans(q);

	ans[0] = true;
	int blocked = 0;

	int a,b;
	for(int i =0;i<q;i++){
		cin >> a >> b;

		a--;
		b--;

		if(mat[a][b]){
			mat[a][b] = 0;
			if(a == 0){
				if(mat[1][b]){
					blocked--;

				}

				if(b+1 < n && mat[1][b+1]){
					blocked--;

				}

				if(b-1 >= 0 && mat[1][b-1]){
					blocked--;

				}
			}else{
				if(mat[0][b]){

					blocked--;
				}

				if(b-1 >=0 && mat[0][b-1]){

					blocked--;
				}

				if(b+1 < n && mat[0][b+1]){

					blocked--;
				}
			}
		}else{
			mat[a][b] = 1;
			if(a == 0){
				if(mat[1][b]){

					blocked++;
				}


				if(b+1 < n && mat[1][b+1]){
					blocked++;

				}

				if(b-1 >= 0 && mat[1][b-1]){
					blocked++;

				}
			}else{
				if(mat[0][b]){
					blocked++;

				}

				if(b-1 >=0 && mat[0][b-1]){
					blocked++;

				}

				if(b+1 < n && mat[0][b+1]){
					blocked++;

				}
			}
		}


		if(blocked){
			ans[i] = false;
		}else{
			ans[i] = true;
		}
	}
	

	for(int i =0;i<q;i++){
		cout << (ans[i] ? "Yes" : "No") << endl;
	}

	system("pause");
	return 0;
}

