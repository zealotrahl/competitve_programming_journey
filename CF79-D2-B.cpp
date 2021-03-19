#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
 
 
using namespace std;
 
int main(){
 
	int n,m,k,t;
 
	cin >> n >> m >> k >> t;
 
 
	int arr[n][m];
 
 
	for(int i =0;i<n;i++){
		
		for(int j =0;j<m;j++){
 
			arr[i][j] = 0;
		}
	}
 
	int a,b;
	
	while(k){
		cin >> a >> b;
 
		a--;
		b--;
		
		arr[a][b] = -1;
 
		k--;
	}
 
	int counter = 1;
	for(int i =0;i<n;i++){
		for(int j = 0; j<m;j++){
			if(arr[i][j] == -1)
				continue;
 
			
			if(counter == 4)
				counter = 1;
 
			arr[i][j] = counter;
			counter++;
 
		}
	}
 
	while(t){
		cin >> a >> b;
 
		a--;
		b--;
 
		if(arr[a][b] == -1)
			cout << "Waste\n";
		else if(arr[a][b] == 1)
			cout << "Carrots\n";
		else if(arr[a][b] == 2)
			cout << "Kiwis\n";
		else
			cout << "Grapes\n";
 
		t--;
	}
 
 	system("pause");
	return 0;
}