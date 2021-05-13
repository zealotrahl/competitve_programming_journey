#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<int> vi;

#define PB push_back
#define MP make_pair
// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


struct P {
	int x, y;
	bool operator<(const P &p) {
		if (x != p.x) return x < p.x;
		else return y < p.y;
	}
};

void subsetGenerate(int n){
	for (int b = 0; b < (1<<n); b++) {
		vector<int> subset;
		for (int i = 0; i < n; i++) {
			if (b&(1<<i)) subset.push_back(i);
		}
	}
}

void permutationGenerate(int n){
	vector<int> permutation;
	for (int i = 0; i < n; i++) {
		permutation.push_back(i);
	}
	do {
	// process permutation
	} while (next_permutation(permutation.begin(),permutation.end()));
}

bool customSort(int a, int b) {
	return a < b;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	int n;
	cin >> n;
	vector<int> arr(n);
	vector<bool> indegree(n, false);
	int count_zeros = 0;
	bool found = false;
	for(int i =0;i<n;i++){
		cin >> arr[i];
		arr[i]--;
		if(arr[i] != -1) {
			indegree[arr[i]] = true;
		}
	}

	stack<int> no_indegree;
	for(int i =0;i<n;i++){
		if(!indegree[i]) {
			no_indegree.push(i);
		}
	}

	for(int c = 0;c < n;c++) {
		if(arr[c] == -1 && !indegree[c]){
			if(c == no_indegree.top()) {
				int temp = no_indegree.top();
				no_indegree.pop();
				arr[c] = no_indegree.top();
				no_indegree.pop();
				no_indegree.push(temp);
			} else {
				arr[c] = no_indegree.top();
				no_indegree.pop();
			}

		}
	}


	for(int c = 0;c < n;c++) {
		if(arr[c] == -1){
			if(c == no_indegree.top()) {
				int temp = no_indegree.top();
				no_indegree.pop();
				arr[c] = no_indegree.top();
				no_indegree.pop();
				no_indegree.push(temp);
			} else {
				arr[c] = no_indegree.top();
				no_indegree.pop();
			}

		}
	}


	for(int i =0;i<n;i++){
		cout << arr[i]  + 1 << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}