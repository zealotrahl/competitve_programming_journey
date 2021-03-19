#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set> 
#include <iterator> 

using namespace std;

int main(){
	int n, k;

	cin >> n >> k;

	vector <long long> numbers(n);

	for(int i=0;i<n;i++)
		cin >> numbers[i];

	if(k == 1){
		cout << (numbers[n-1] - numbers[0]);
	}else if(k == n){
		cout << 0;
	}else{
		multiset <long long> cuts;


		for(int i=0;i<n-1;i++){
			long long raznost = numbers[i+1] - numbers[i];
			cuts.insert(raznost);

		}
		
		long long count = 0;

		int counter = k-1;
		
		for (multiset<long long>::reverse_iterator rit=cuts.rbegin(); rit!=cuts.rend(); ++rit){
			if(counter == 0)
				break;
				
			count += *rit;
			counter--;

		}

    

		cout << (numbers[n-1] - numbers[0]) - count;
	}

	

	



	return 0;
}
