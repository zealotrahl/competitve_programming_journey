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

	vector <int> first(3);
	vector <int> second(3);
	

	for(int i =0;i<3;i++)
		cin >> first[i];

	for(int i =0;i<3;i++)
		cin >> second[i];



	bool flag = false;
	for(int i =0;i<3;i++){
		flag = false;

		for(int j =0;j<3;j++){
			if(first[i] == second[j]){
				flag = true;

				break;
			}
		}

		if(!flag){
			break;
		}
	}

	if(!flag){
		cout << "NO";
	}else{
		sort(first.begin(), first.end());

		if(first[2]*first[2] != (first[0]*first[0] + first[1]*first[1])){
			cout << "NO";
		}else{
			cout << "YES";
		}
	}

	system("pause");
	return 0;
}


