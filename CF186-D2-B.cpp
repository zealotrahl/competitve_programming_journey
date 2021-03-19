#include <bits/stdc++.h>
#include <iomanip>


using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers



bool compare(pair <double,int> a, pair<double,int> b){
	if(a.first == b.first){
		return a.second > b.second;
	}else{
		return a.first < b.first;
	}
}

int main(){

	double n,t1,t2,k;

	cin >> n >> t1 >> t2 >> k;

	k = (100 - k)/100;


	int a,b;

	vector <pair<double,int>> ans(n);

	for(int i =0;i<n;i++){
		cin >> a >> b;
		double cur = 0;

		if(t1*a*k + t2*b > t1*b*k + t2*a){
			cur = t1*a*k + t2*b;
		}else{
			cur = t1*b*k + t2*a;
		}

		ans[i].first = round( cur * 100.0 ) / 100.0;;
		ans[i].second = i+1;
	}

	sort(ans.rbegin(), ans.rend(), compare);


	for(int i =0;i<n;i++){

		printf("%d %.2f\n", ans[i].second, ans[i].first);

	}
	



	system("pause");
	return 0;
}

