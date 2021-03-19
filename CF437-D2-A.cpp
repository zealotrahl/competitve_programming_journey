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

	string a,b,c,d;

	cin >> a >> b >> c >> d;

	vector <string> arr(4);


	a = a.substr(2);
	b = b.substr(2);
	c = c.substr(2);
	d = d.substr(2);


	arr[0] = a;
	arr[1] = b;
	arr[2] = c;
	arr[3] = d;

	string s;

	vector <bool> ans(4, false);

	for(int i =0;i<4;i++){
		s = arr[i];
		bool flag = false;

		for(int j=0;j<4;j++){
			if(j == i)
				continue;
			if(s.size() >= 2*arr[j].size()){
				flag =true;
			}else{
				flag = false;
				break;
			}
		}

		if(!flag){
			for(int j=0;j<4;j++){
				if(j == i)
					continue;
				if(s.size() <= arr[j].size()/2){
					flag = true;
				}else{
					flag = false;
					break;
				}
			}
		}

		ans[i] = flag;
	}

	int counter = 0;

	for(bool f : ans){
		if(f)
			counter++;
	}


	if(counter > 1 || counter == 0)
		cout << "C";
	else{
		if(ans[0])
			cout << "A";
		else if(ans[1])
			cout << "B";
		else if(ans[2])
			cout << "C";
		else if(ans[3])
			cout << "D";
	}


	return 0;
}


