#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int a,n;

	cin >> n >> a;

	vector <int> arr(n);

	for(int i =0; i< n;i++)
		cin >> arr[i];




	int d = 1;
	int cur = a-1;

	int c = arr[cur];
	while(d < n){

		if(d+cur > n-1 && cur-d < 0)
			break;


		if(cur-d < 0 || cur+d > n-1){
			if(cur+d > n-1 && arr[cur-d] == 1){
				c++;
			}else if(cur-d < 0 && arr[cur+d] == 1){
				c++;
			}
		}else if(arr[d+cur] == 1 && arr[cur-d] == 1){
			c+=2;
		}
			
		d++;
	}

	cout << c;


	return 0;
}
