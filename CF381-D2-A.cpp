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

	vector <int> cards(n);


	for(int i=0;i<n;i++)
		cin >> cards[i];


	int left = 0;

	int right = n-1;

	bool even = true;

	int sereja = 0;

	int dima = 0;
	int take = 0;
	while(left <= right){

		take = 0;

		if(cards[left] > cards[right]){
			take = cards[left];
			left++;
		}else{
			take = cards[right];
			right--;
		}
		
		if(even){
			sereja += take;
		}else{
			dima += take;
		}

		even = !even;
	}


	cout << sereja << " " << dima;



	return 0;
}
