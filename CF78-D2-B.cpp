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

	char arr[] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};

	int cur= 0;
	bool flag = false;
	for(int i=0;i<n;i++){

		if(flag){
			flag =false;
		}else if(cur != 0 && cur%7 == 0){
			cur = 3;
			flag = true;
		}

		cout << arr[cur];

		cur++;
	}

	return 0;
}
