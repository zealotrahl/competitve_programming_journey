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

	if(n%2 == 0)
		cout << "NO\n";
	else{
		cout << "YES\n";
		int k = 2*n;
		vector <int> arr(k);

		int counter = 1;
		int i = 0;

		bool even = true;
		bool f = true;


		while(counter <= k){
			arr[i] = counter;

			if(even){
				if(f){
					 f =false;
					i += n;
				}else{
					f =true;
					i -= n;
				}

				even = false;
			}else{
				even  =true;
				i++;
			}

			counter++;
		}


		for(int i =0;i<k;i++){
			cout << arr[i] << " ";
		}

	}

	system("pause");
	return 0;
}


