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
	
	int p;
	cin >> p;

	int a = p/3;

	int b = (p-a)/2;
	int c = (p-a-b);

	bool flag = true;

	if(p < 3) {
		flag = false;
	}

	vector<int> arr;
	arr.push_back(a);
	arr.push_back(b);
	arr.push_back(c);

	sort(arr.begin(), arr.end());
	if(arr[0] + arr[1] <= arr[2]){
		flag = false;
	}

	int an1,an2,an3;

	if(flag) {
		an1 = a;
		an2 = b;
		an3 = c;

		if(!(p&1)) {
			a = 2;
			b = (p-2)/2;
			c = (p-a-b);
		} else {
			a = 1;
			b = (p-a)/2;
			c = (p - a -b);
		}
	}

	if(!flag){
		cout << -1 << endl;
	} else {
		cout << an1 << " " << an2 << " " << an3 << endl;
		cout << a << " " << b << " " << c << endl;
	}


	system("pause");
	return 0;
}