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




	vector <pair<string, int>> oper(n);

	string s;

	int x;

	for(int i =0;i<n;i++){

		cin >> s >> x;

		oper[i] = make_pair(s,x);
	}


	long long out = 0;



	int p;

	for(int c = 1; c<= 100;c++){

		p = c;

		for(int i =0;i<n;i++){
			s = oper[i].first;
			x = oper[i].second;

			if(s == "SUBTRACT"){
				if(p - x < 0){
					out++;
					break;
				}else
					p -= x;


			}else if(s == "DIVIDE"){

				if(p%x != 0){
					out++;
				}
				else
					p /= x;

			}else if(s == "ADD"){
				p += x;
			}else{
				p *= x;
			}
		}

	}


	cout << out;

	

	system("pause");
	return 0;
}


