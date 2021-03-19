#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){
	long long n,x,y;

	cin >> n >> x >>y;

	vector <long long> days(n);

	for(int i=0;i<n;i++)
		cin >> days[i];




	for(int i=0;i<n;i++){

		int min_val = days[i];
	
		bool valid = true;
		int y_days = y;
		int y_d = i+1;
		
		while(y_days != 0 && y_d < n){
			if(days[y_d] < min_val){
				valid = false;
				break;
			}
			y_d++;
			y_days--;
		}

		if(!valid)
			continue;


		int x_days = x;
		int x_d = i-1;

		while(x_days != 0 && x_d >= 0){
			if(days[x_d] < min_val){
				valid = false;
				break;
			}

			x_d--;
			x_days--;
		}

		if(valid){
			cout << i+1;
			break;
		}
		
	}
	


	return 0;
}
