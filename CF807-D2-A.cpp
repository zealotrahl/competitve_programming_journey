#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){
	int n;

	cin >> n;

	vector <int> arr(n);

	int a,b;

	int p = n;
	int i =0;
	while(n){
		cin >> a >> b;


		if(a != b){
			cout << "rated";

			return 0;
		}

		arr[i] = a;
		i++;
		n--;
	}


	for(int i =1;i<p;i++){
		if(arr[i] > arr[i-1]){
			cout << "unrated";

			return 0;
		}

	}

	cout << "maybe";


	return 0;
}
