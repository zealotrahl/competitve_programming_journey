#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>


using namespace std;

int main(){

	int n;


	cin >> n;



	vector <int> arr(n);

	for(int i=0;i<n;i++){
		cin >> arr[i];
	}

	int p = 0;

	cin >> p;

	cin >> p;

	cin >> p;




	int a = sqrt((arr[1]*arr[2])/p);


	cout << a;
	for(int i=1;i<n;i++){
		cout << " " << arr[i]/a;
	}


	

	system("pause");
	return 0;
}




