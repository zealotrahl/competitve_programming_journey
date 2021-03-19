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

	int n,c,d;

	cin >> n >> c >> d;


	vector <pair <int ,int>> almaznie;
	vector <pair <int, int>> monetnie;


	int krasota, cena;

	char c;

	for(int i =0;i<n;i++){
		cin >> krasota >> cena >> c;
		if(c == 'C'){
			monetnie.push_back(make_pair(krasota,cena));
		}else{
			almaznie.push_back(make_pair(krasota,cena));
		}
	}





	

	system("pause");
	return 0;
}


