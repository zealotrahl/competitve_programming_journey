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

	int n,k;

	cin >> n >> k;

	vector <long long> negative;
	vector <long long> pos;


	long long cur = 0;

	long long a;

	int zeros = 0;

	for(int i=0;i<n;i++){
		cin >> a;
		if(a < 0)
			negative.push_back(a);
		else if(a > 0)
			pos.push_back((a));
		else
			zeros++;
	}


	sort(negative.begin(), negative.end());
	sort(pos.begin(), pos.end());





	for(int i  =0; i< negative.size();i++){

		if(k > 0){
			negative[i] *= -1;
			k--;
		}


	}

	if(zeros == 0){
		if(k > 0 && (k&1)){
			if(negative.size() && pos.size()){
				if(negative[negative.size() -1] < pos[0])
					negative[negative.size()-1] *= -1;
				else
					pos[0] *= -1;
			}else if(negative.size()){
				negative[negative.size()-1] *= -1;
			}else if(pos.size()){
				pos[0] *= -1;
			}
		}
	}


	for(int i =0;i<negative.size();i++)
		cur += negative[i];


	for(int i=0;i<pos.size();i++)
		cur += pos[i];



	cout << cur;




	

	system("pause");
	return 0;
}


