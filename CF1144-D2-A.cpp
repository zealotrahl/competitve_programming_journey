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

	int n;

	cin >> n;


	string s;

	while(n--){
		cin >> s;

		sort(s.begin(), s.end());


		bool flag = true;

		for(int i =1;i<s.size();i++){
			if(s[i] - s[i-1] != 1){
				flag = false;
				break;
			}
		}


		cout << (flag ? "YES\n" : "NO\n");


	}
	

	system("pause");
	return 0;
}


