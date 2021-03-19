#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){
	int n,m,k;


	cin >> n >> m >> k;


	vector <int> houses(n);

	for(int i=0;i<n;i++){
		cin >> houses[i];
	}


	m--;

	int l_indx = m-1;
	int r_indx = m+1;

	int distance = 10;
	while(true){
		
		if(l_indx >= 0 && houses[l_indx] <= k && houses[l_indx] != 0){
			break;
		}

		if(r_indx < n && houses[r_indx] <= k && houses[r_indx] != 0)
			break;


		l_indx--;
		r_indx++;

		distance += 10;
	}

	cout << distance;



	return 0;
}
