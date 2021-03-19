#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,k;

	cin >> n >> k;

	set <int> unique;

	int a;

	deque <int> answer;

	

	for(int i =0;i<n;i++){
		cin >> a;


		if(unique.count(a) == 0){

			if(answer.size() == k){
				unique.erase(answer.front());
				answer.pop_front();
			}

			answer.push_back(a);

			unique.insert(a);
		}
	}


	cout << unique.size() << "\n";

	while(!answer.empty()){

		cout << answer.back() << " ";

		answer.pop_back();
	}
	

	system("pause");
	return 0;
}


