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

	int n;


	cin >> n;


	vector <int> prices(n);

	int a,b;


	for(int i =0;i<n;i++){
		cin >> prices[i];
	}




	vector <map <int, int>> futbolka(3);


	for(int i =0;i<n;i++){

		cin >> a;
		a--;

		futbolka[a][prices[i]] = 1;
	}

	
	for(int i =0;i<n;i++){

		cin >> a;
		a--;

		futbolka[a][prices[i]] = 1;
	}







 	int m;

 	cin >> m;

	for(int i =0;i<m;i++){
		cin >> a;

		a--;

		int price = futbolka[a].begin()->first;



		futbolka[0].erase(price);
		futbolka[1].erase(price);
		futbolka[2].erase(price);


		if(price == 0)
			cout << "-1";
		else
			cout << price;

		cout << " ";

	}
	

	system("pause");
	return 0;
}


