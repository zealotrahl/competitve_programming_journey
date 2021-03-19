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


	cin >>n;

	string in;

	cin >>in;

	vector <int> arr;

	for(int i =0;i<n;i++){
		int p = in[i] - '0';


		if(p == 0 || p == 1)
			continue;


		arr.push_back(p);
	}

	sort(arr.begin(), arr.end());


	string out = "";

	for(int i =0;i<arr.size();i++){

		if(arr[i] == 4){
			out += "322";
		}else if(arr[i] == 6){
			out += "53";
		}else if(arr[i] == 8){
			out += "7222";
		}else if(arr[i] == 9){
			out += "7332";
		}else{
			out += arr[i] + '0';
		}
	}


	sort(out.begin(), out.end());
	reverse(out.begin(), out.end());
	cout << out << endl;

	system("pause");
	return 0;
}


