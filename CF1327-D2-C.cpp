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

	int n,m,k;
	cin >> n >> m >> k;
	vector <pair<int,int>> arr(k);
	bool top = true;
	if(n > m){
		top = false;
	}
	for(int i =0;i<k;i++){
		cin >> arr[i].first >> arr[i].second;
	}
	vector <pair<int,int>> must(k);
	for(int i =0;i<k;i++){
		cin >> must[i].first >> must[i].second;
	}

	cout << (min(n,m) + max(n,m)) + n*m -1 << endl;

	if(top){
		for(int i =0;i<min(n,m);i++){
			cout << "U";
		}
		for(int i =0;i<max(n,m);i++){
			cout << "L";
		}
	}else{
		for(int i =0;i<min(n,m);i++){
			cout << "L";
		}
		for(int i =0;i<max(n,m);i++){
			cout << "U";
		}
	}
	bool tp = true;
	int counter = 0;
	for(int i =1;i<n*m;i++){
		if(counter == (m-1) && tp){
			cout << "D";
			tp = false;
		}else if(counter == 0 && !tp){
			cout << "D";
			tp = true;
		}else if(tp){
			cout << "R";
			counter++;
		}else{
			cout << "L";
			counter--;
		}
	}
	

	system("pause");
	return 0;
}
