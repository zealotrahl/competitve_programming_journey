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
	vector <long long> civil(n);

	for(int i=0;i<n;i++)
		cin >> civil[i];


	int q;

	cin >> q;
	
	while(q){
		int j;

		cin >> j;

		if(j == 1){
			int p;
			cin >> p;
			long long x;

			cin >> x;
			
			civil[p-1] = x;
		}else{

			long long x;
			cin >> x;

			for(int i=0;i<n;i++){
				if(civil[i] < x)
					civil[i] = x;
			}

			
		}

		q--;
	}


	for(int i=0;i<n;i++)
		cout << civil[i] << " ";

	return 0;
}
