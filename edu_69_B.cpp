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


	
	vector <int> stolb(n);

	for(int i=0;i<n;i++)
		cin >> stolb[i];


	int max_disk = stolb[0];
	int max_disk_indx = 0;
	
	for(int i=1;i<n;i++){
		if(stolb[i] > max_disk){
			max_disk = stolb[i];
			max_disk_indx = i;
		}
	}

	bool flag = true;
	
	for(int i =max_disk_indx - 1;i>0;i--){
		if(stolb[i] <= stolb[i-1]){
			flag =false;
			break;
		}
	}

	if(flag){
		for(int i=max_disk_indx+1;i<n-1;i++){
			if(stolb[i] <= stolb[i+1]){
				flag =false;
				break;
			}
		}
	}

	int i = max_disk_indx - 1;
	int j = max_disk_indx + 1;

	while(i >= 0 && j < n){
		if(stolb[i] == stolb[j]){
			flag = false;
			break;
		}

		i--;
		j++;
	}

	if(flag)
		cout << "YES";
	else
		cout << "NO";


	


	return 0;
}
