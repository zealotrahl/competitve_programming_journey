#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int T;

	cin >> T;

	int n;
	while(T){
		cin >> n;

		vector <int> doski(n);

		for(int i=0;i<n;i++)
			cin >> doski[i];


		sort(doski.begin(), doski.end());

		int vertical1 = doski[n-1];
		int vertical2 = doski[n-2];

		
		if(vertical1 == 1 || vertical2 == 1){
			cout << 0 << "\n";
		}else{
			int small = min(vertical1, vertical2) - 1;

			if(small < n-2)
				cout << small << "\n";
			else
				cout << n-2 << "\n"; 
		}

		T--;
	}


	return 0;
}
