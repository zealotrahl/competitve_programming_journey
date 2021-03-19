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
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;

	cin >> n;

	vector <int> arr(n);


	vector <int> first;
	vector <int> second;
	vector <int> third;

	for(int i =0;i<n;i++){
		cin >>arr[i];

		if(arr[i] < 0){
			first.push_back(arr[i]);
		}else if(arr[i] > 0){
			second.push_back(arr[i]);
		}else{
			third.push_back(arr[i]);
		}

	}


	if(second.size() == 0){
		second.push_back(first.back());
		first.pop_back();
		second.push_back(first.back());
		first.pop_back();
	}

	if(!(first.size()&1)){
		third.push_back(first.back());
		first.pop_back();
	}

	cout << first.size() << " ";
	for(int i =0;i<first.size();i++)
		cout << first[i] << " ";
	cout << endl;

	cout << second.size() << " ";
	for(int i =0;i<second.size();i++)
		cout << second[i] << " ";
	cout << endl;

	cout << third.size() << " ";
	for(int i =0;i<third.size();i++)
		cout << third[i] << " ";
	cout << endl;

	

	system("pause");
	return 0;
		
}
