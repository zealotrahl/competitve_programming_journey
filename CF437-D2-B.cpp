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

	int sum, limit;

	cin >> sum >> limit;


	int n = sum > limit ? limit : sum;


	vector <pair <int, long long>> ans;

	int i;

	while (n > 0) {

		int c = n;

		i =0;
		while(c){

			if(c&1){

				ans.push_back(make_pair(1 << i,n));
				break;
			}

			c >>= 1;
			i++;
		}
		n--;
	}

	sort(ans.begin(), ans.end());


	long long cur = 0;


	vector <long long> out;

	for(int i = ans.size()-1; i>= 0;i--){
		if(cur == sum){
			break;
		}

		if(cur + ans[i].first > sum)
			continue;

		cur += ans[i].first;

		out.push_back(ans[i].second);
	}

	if(cur == sum){
		cout << out.size() << endl;
		for( long long x : out)
			cout << x << " ";
	}else{
		cout << -1;
	}



	system("pause");
	return 0;
}


