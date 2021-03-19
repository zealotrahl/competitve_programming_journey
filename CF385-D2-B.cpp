#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>


using namespace std;

int main(){

	string s;

	cin >> s;

	int n = s.size();
	vector <long long> arr;

	for(long long i =0;i<n-3;i++){
		if(s[i] == 'b' && s[i+1] == 'e' && s[i+2] == 'a' && s[i+3] == 'r'){
			arr.push_back(i);
			i+= 3;
		}
	}


	long long counter = 0;

	for(int i=0;i<n;i++)
	{
		for(int j=0;j<arr.size();j++)
		{
			if(i<=arr[j]){
				counter += n- arr[j] - 3;
				break;
			}
		}
	}

	cout << counter;
	

	system("pause");
	return 0;
}


