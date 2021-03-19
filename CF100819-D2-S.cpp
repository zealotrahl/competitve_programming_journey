#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>
#include <tuple>


using namespace std;

int main(){

	int n;

	cin >> n;



	vector<tuple <int, int, int>> wave(n);


	int a,b,c;
	for(int i = 0;i<n;i++){
		cin >> a >> b >> c;

		wave[i] = make_tuple(a,b,c);
	}



	sort(wave.begin(), wave.end());


	int points;
	int lose;

	long long out = 0;

	int j;

	for(int i =0;i<n;){


		points = get<1>(wave[i]);

		int last_p = get<0>(wave[i])+get<2>(wave[i]);


		lose = 0;
		j = i+1;

		for(;j<n;j++){

			if(get<0>(wave[j]) >= last_p)
				break;

			lose += get<1>(wave[j]);
		}


		if(points > lose){
			out += points;

			i = j;
		}else{
			i++;
		}
	}


	cout << out << endl;

	system("pause");
	return 0;
}


