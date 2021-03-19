#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;


//Тренировочный контест МПГУ 2018-2019
int main(){

	long long k, n, m;

	

	cin >> k >> n >> m;

	n++;
	m++;



	if(n < m){
		while(n){
			if(k <= 0)
				break;
				
			k -= m;
			n--;
		}
	}else{
		while(m){
			if(k <= 0)
				break;

			k -= n;
			m--;
		}
	}

	if(k <= 0)
		cout << "YES\n";
	else
		cout << "NO\n";

	return 0;
}
