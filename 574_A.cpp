#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	int n,k;

	cin >> n >> k;
	vector <int> favorites_count(k+1,0);
	
	for(int i=0;i<n;i++){
		int a;
		cin >> a;
		favorites_count[a]++;
	}

	int sets = n/2;
	
	if(n%2 != 0)
		sets++;


	sort(favorites_count.begin(), favorites_count.end());

	int count = 0;
	
	for(int unsigned i= favorites_count.size()-1;i>=0;i--){
		int p = favorites_count[i];

		if(sets <= 0){
			break;
		}
		
		int u = p/2;

		if(p%2 != 0){
			u++;
		}
		
		if(u > sets){
			count += sets*2;
			break;
		}else{
			count += p;
		}
		
		sets -= u;
		

		
	}

	cout << count;

	




	return 0;
}
