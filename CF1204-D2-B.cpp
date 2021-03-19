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


	int n, l ,r;

	cin >> n >> l >> r;


	long long min_sum = 0;


	for(int i =0;i<n;i++){
		if(l > 1){
			min_sum += pow(2, i+1);
			l--;
		}else{
			min_sum += (n-i);
			break;
		}
	}

	long long max_sum = 0;

	int i =0;
	for(i =-1;i<n;i++){
		if(r > 1){
			max_sum += pow(2, i+1);
			r--;
		}else{
			max_sum += pow(2, i+1)*(n-i-1);
			break;
		}
	}






	cout << min_sum << " " << max_sum;



	system("pause");
	return 0;
}


