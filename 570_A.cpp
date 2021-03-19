#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <unordered_set>


using namespace std;

int main(){

	int n, m;

	cin >> n >> m;

	vector <vector <char>> answers(n);

	int a = n;
	int j = 0;
	while(a){
		string k;

		cin >> k;



		for(int i =0;i<m;i++){
			answers[j].push_back(k[i]);
		}


		j++;
		a--;
	}

	vector <int> scores(m);

	for(int i=0;i<m;i++){
		cin >> scores[i];
	}


	int counter = 0;
	for(int i=0;i<m;i++){
		unordered_multiset<char> alpha;

		
		for(int j=0;j<n;j++){
			alpha.insert(answers[j][i]);
		}

		unsigned int max_num = alpha.count('A');
		max_num = max(max_num, alpha.count('B'));
		max_num = max(max_num, alpha.count('C'));
		max_num = max(max_num, alpha.count('D'));
		max_num = max(max_num, alpha.count('E'));

		counter += (max_num*scores[i]);
	}


	cout << counter;

	return 0;
}
