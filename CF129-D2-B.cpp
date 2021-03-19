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

	int n,m;


	cin >> n >> m;


	vector <pair <int ,int>> pairs(m);

	int i =0;

	int a,b;

	int k = m;
	while(k--){
		cin >> a >> b;

		pairs[i] = make_pair(a,b);


		i++;
	}


	int occurence = 0;

	int first_occur = -1;


	int counter = 0;

	bool flag = true;



	
	while(flag){
		flag =false;

		vector <int> occurs;
		

		for(int i =1;i<=n;i++){

			occurence = 0;
			first_occur = -1;


			for(int j=0;j<m;j++){
				if(pairs[j].first == 0 || pairs[j].second == 0)
					continue;



				if(pairs[j].first == i || pairs[j].second == i){


					occurence++;

					first_occur = j;

					if(occurence > 1)
						break;
				}

			}

			if(occurence  == 1){

				occurs.push_back((first_occur));
				flag = true;
			}
		}

		if(flag){

			for(int c = 0;c<occurs.size();c++){
				pairs[occurs[c]].first = 0;
				pairs[occurs[c]].second = 0;
			}


			counter++;
		}
	}


	cout << counter;

	

	system("pause");
	return 0;
}


