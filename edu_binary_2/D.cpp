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

vector<long long> nadul(1000);
vector<long long> otdihaet(1000);
vector<long long> vremya(1000);
bool sharikovZa(vector<tuple<long long,long long,long long>> &arr, long long t, long long m) {
	long long sharikov = 0;

	long long n = arr.size();
	nadul.assign(n, 0);
	otdihaet.assign(n, 0);
	vremya.assign(n, 0);
	while(t--) {
		for(long long i =0;i<n;i++){
			if(sharikov == m) {
				return true;
			}

			if(otdihaet[i] == 0) {
				vremya[i]++;
			} else {
				otdihaet[i]--;
			}
			if(vremya[i] == get<0>(arr[i])) {
				vremya[i] = 0;
				nadul[i]++;
				sharikov++;
			}
			if(nadul[i]%get<1>(arr[i]) == 0) {
				otdihaet[i] = get<2>(arr[i]);
			}
		}
	}

	if(sharikov == m) {
		return true;
	}
	
	return false;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	long long m,n;
	cin >> m >> n;

	vector<tuple<long long,long long, long long>> arr(n);
	for(long long i =0;i<n;i++){
		long long t,z,y;
		cin >> t >> z >> y;
		arr[i] = make_tuple(t,z,y);
	}

	long long l = 0;
	long long r = 1500000;

	while(l + 1 < r) {
		long long midle = (l+r)/2;
		if(sharikovZa(arr, midle, m)) {
			r = midle;
		} else {
			l = midle;
		}
	}

	cout << r << endl;
	for(int i =0;i<n;i++){
		cout << nadul[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}