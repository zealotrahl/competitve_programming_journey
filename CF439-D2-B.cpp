#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){

	long long n,x;
	cin >> n >> x;


	long long out = 0;

	vector<long long> subjects(n);


	for(int i =0;i<n;i++)
		cin >> subjects[i];



	sort(subjects.begin(), subjects.end());
	
	for(int i=0;i<n;i++){
		out += x*subjects[i];
		
		if(x > 1)
			x--;
	}
	

	cout << out;


	return 0;
}
