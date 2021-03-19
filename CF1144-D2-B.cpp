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


	vector <int> even;

	vector <int> odd;

	int a;

	for(int i =0;i<n;i++){
		cin >> a;

		if(a&1)
			odd.push_back(a);
		else
			even.push_back(a);
	}


	sort(even.begin(), even.end());
	sort(odd.begin(), odd.end());

	int sum = 0;


	if(even.size() > odd.size()){

		for(int i =0;i<(even.size() - (odd.size()+1)); i++){
			sum += even[i];
		}

	}else if(odd.size() == even.size()){

	}else{
		for(int i =0;i<(odd.size() - (even.size()+1)); i++){
			sum += odd[i];
		}
	}


	cout << sum;

	

	system("pause");
	return 0;
}


