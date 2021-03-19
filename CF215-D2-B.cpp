#include <bits/stdc++.h>
#include <cmath>
#include <iomanip>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


const double PI = 3.14159265358979323846;


int main(){

	int n,m,k;


	cin >> n;


	vector <double> r1(n);

	for(int i =0;i<n;i++)
		cin >> r1[i];


	sort(r1.begin(), r1.end());

	cin >> m;

	vector <double> p1(m);

	for(int i =0;i<m;i++)
		cin >> p1[i];

	sort(p1.begin(), p1.end());

	cin >> k;

	vector <double> p2(k);

	for(int i =0;i<k;i++)
		cin >> p2[i];

	sort(p2.begin(), p2.end());


	double a,b;

	cin >> a >> b;


	double m_k = a/b;

	double ans = (p1[m-1]*r1[n-1]*r1[n-1])/(p1[m-1]+p2[0]*m_k);

	cout << setprecision(10) << sqrt(ans);

	

	system("pause");
	return 0;
}


