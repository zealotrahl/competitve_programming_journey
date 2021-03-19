#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>

using namespace std;

int main(){
	long long k;
	int n;

	cin >> k >> n;

	long long a,b;

	vector <pair <long long, long long>> items(n);

	int i =0;
	while(i < n){
		cin >> a >> b;
		items[i] = make_pair(a,b);
		
		i++;
	}

	
	sort(items.begin(), items.end());


		
	long long count = 0;
	
	for(int i=0;i<n;i++){
		if(k == 0)
			break;

		if(items[i].first*items[i].second > k){
			int can_take = k/items[i].first;
			count += can_take;
			k-= can_take*items[i].first;
			break;
		}else{
			count += items[i].second;
			k-= items[i].first*items[i].second;
		}
	}

	cout << count;



	return 0;
}
