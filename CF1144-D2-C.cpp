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


	for(int i =0;i<n;i++){
		cin >> arr[i];
	}


	sort(arr.begin(), arr.end());



	vector <int> first;

	vector <int> second;



	int p = 0;
	for(int i =0;i<n;i++){
		p = arr[i];

		if(first.size() == 0 || first[first.size() - 1] != p){
			first.push_back(p);
		}else{

			if(second.size() != 0 && second[second.size() -1 ] == p){
				cout << "NO";
				return 0;
			}

			second.push_back(p);
		}
	}


	reverse(second.begin(), second.end());


	cout << "YES\n";

	cout << first.size() << endl;
	for(int i =0;i<first.size();i++){
		cout << first[i] << " ";
	}

	cout << endl;
	cout << second.size() << endl;
	for(int i =0;i<second.size();i++){
		cout << second[i] << " ";
	}


	

	system("pause");
	return 0;
}

