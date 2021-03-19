#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;


bool sortbysec(pair <int, int> &a, pair <int, int> b)
	return (a.second < b.second);



int main(){

	int n, m;

	cin >> n >> m;

	long long matches = 0;

	vector <pair <int, int>> boxes(m);
	
	for(int i=0;i<m;i++){
		int a,b;

		cin >> a >> b;

		boxes[i] = make_pair(a,b);

	}

	sort(boxes.begin(), boxes.end(), sortbysec);


	for(int i =m-1;i>=0;i--){
		if(n == 0)
			break;

		int a,b;

		a = boxes[i].first;
		b = boxes[i].second;

		if(a > n)
			a = n;

		matches += a*b;

		n -= a;
	}
	


	cout << matches;


	return 0;
}
