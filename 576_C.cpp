#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <cmath>

using namespace std;

int main(){

	int n;
	long long I;

	cin >> n >> I;

	multiset <long long> m1;
	set <long long> music;
	vector <long long> arr;

	for(int i=0;i<n;i++){

		long long a;

		cin >> a;
		m1.insert(a);
		music.insert(a);
	}

	for(long long x : music){
		arr.push_back(m1.count(x));
	}

	sort(arr.begin(), arr.end());


	
	int k = (int)ceil(log2(1.0*arr.size()));

	I *= 8;
	
	if(n*k <= I){
		cout << 0;
	}else{

		long long need = n*k-I;

		long long ans;

		
		if(need >= n){
			ans = ceil((double)need/n);
		}
		else
			ans = k-1;


		if(ans >= n)
			cout << n;
		else{
			ans = (arr.size() - pow(2, k-ans));
			
			long long erase = 0;

			for(int unsigned i=0; i< arr.size();i++){
				if(ans == 0)
					break;
			
				erase += arr[i];

				ans--;
			}


			cout << erase;
		}
	}

	


	return 0;
}
