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

	vector <long long> stones(n);
	vector <long long> sorted_stones(n);
	
	for(int i=0;i<n;i++){
		int a;
		
		cin >> a;
		
		stones[i] = a;
		sorted_stones[i] = a;
	}


	sort(sorted_stones.begin(), sorted_stones.end());

	for(int i=1;i<n;i++){
		stones[i] = stones[i] + stones[i-1];
		sorted_stones[i] = sorted_stones[i] + sorted_stones[i-1];
	}

	
	

	
	int m;


	cin >> m;
	

	long long sum;
	
	while(m > 0){
		int type, l,r;
		
		sum = 0;
		
		cin >> type >> l >> r;

		l -= 2;
		r--;
		
		if(type == 1){

			sum = stones[r];

			if(l != -1)
				sum -= stones[l];
	

		}else{
			sum = sorted_stones[r];

			if(l != -1)
				sum -= sorted_stones[l];

				
		}

		cout << sum << "\n";
		

		m--;
	}


	return 0;
}
