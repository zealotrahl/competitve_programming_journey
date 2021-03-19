#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <bitset>

using namespace std;


short int pre[10000005];



int n,p,k,M;

void checker(int m){

    if(pre[m] == 0 && m > 0){ 
		pre[m] = 1;
		
		if(m%k == 0)
			checker(m/k);

		
		checker(m-p);
	}


}

int main(){

	cin >> n >> p >> k >> M;

	for(int i=0;i<10000005;i++)
		pre[i] = 0;
	
	checker(M);

	



	int a;
	
	while(n){
		cin >>a;

		if(pre[a] == 1){
			cout << 1;
		}else{
			cout << 0;
		}

		if(n != 1)
			cout << " ";
		n--;
	}


	return 0;
}
