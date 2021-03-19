#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>

using namespace std;

int main(){
	int n,k,q;

	cin >> n >> k >> q;


	vector <pair <int, int>> recipes(n);

	int a,b;
	for(int i=0;i<n;i++){
		cin >> a >> b;

		recipes[i] = make_pair(a,b);
	}


	sort(recipes.begin(), recipes.end());

	
	int mi, ma;

	mi = recipes[0].first;
	ma = recipes[0].second;

	vector <pair <int, int>> valid_recipes;

	int p = 1;
	for(int i =1;i<n;i++){

		a = recipes[i].first;
		b = recipes[i].second;

		if(a <= ma){
			mi = a;
			ma = min(ma, b);


			if(mi > ma)
				continue;

				
			p++;

			if(p == k){
				valid_recipes.push_back(make_pair(mi, ma));
				mi = a;
				ma = b;
				
				p = 1;
			}
			
		}else{
			mi = a;
			ma = b;
		}

	}

	while(q){
		cin >> a >> b;

		int out = 0;
		unsigned int i;
		for(i =0;i<valid_recipes.size();i++){

			mi = max(valid_recipes[i].first, a);
			ma = min(valid_recipes[i].second, b);

			if(mi <= ma)
				out += ma-mi+1;
		}

		cout << out << endl;


		q--;
	}




	return 0;
}
