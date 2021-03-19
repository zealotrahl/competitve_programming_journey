#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


vector <pair<int,int>> segs;

int getSegSize(int index){
	return ((segs[index].second - segs[index].first) + 1);
}

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n;

	cin >> n;

	vector <int> arr(n);

	for(int i =0;i<n;i++){
		cin >> arr[i];
	}


	int counter = 0;


	int begin = 0;
	int i = 1;


	for(;i<n;i++){
		if(arr[i] <= arr[i-1]){

			counter = max(counter, i - begin);

			segs.push_back(make_pair(begin, i-1));
			begin = i;
		}
	}


	counter = max(counter, i - begin);
	segs.push_back(make_pair(begin,i-1));




	// for(int i =0;i<segs.size();i++){
		
	// 	cout << segs[i].first << " " << segs[i].second << endl;
	// }


	for(int i =1;i<segs.size();i++){
		int size = getSegSize(i);


		if(getSegSize(i-1) != 1 && arr[segs[i].first] > arr[segs[i-1].second-1]){
			size += getSegSize(i-1)-1;

		}else if(size != 1 && arr[segs[i-1].second] < arr[segs[i].first+1]){
			size += getSegSize(i-1) - 1;
		}else if(size == 1){
			if(i != n-1 && arr[segs[i-1].second] < arr[segs[i+1].first]){
				size = max(size, getSegSize(i-1) + getSegSize(i+1));
			}
		}

		counter = max(size, counter);

	}

	cout << counter;
	

	system("pause");
	return 0;
}


