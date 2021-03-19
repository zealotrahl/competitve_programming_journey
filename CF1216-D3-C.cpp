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

	int x1,y1,x2,y2;

	int x3,y3,x4,y4;

	int x5,y5, x6,y6;


	cin >> x1 >> y1 >> x2 >> y2;

	cin >> x3 >> y3 >> x4 >> y4;

	cin >> x5 >> y5 >> x6 >> y6;


	long long ploshad_belogo = (abs(y2-y1)*abs(x2-x1));

	long long ploshad_pervogo = (abs(y4-y3)*abs(x4-x3));

	long long ploshad_vtorogo = (abs(y6-y5)*abs(x6-x5));

	if(ploshad_belogo > ploshad_vtorogo+ploshad_pervogo){
		cout << "YES";
	}else{
		



		
	}
	

	system("pause");
	return 0;
}


