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

class SegTreeMinCnt {
public:
	vector<pair<int,int>> tree;
	int size;

	void init(int n) {
		//заполняем степенью двойки
		size = 1;
		while(size < n) size *= 2;
		tree.assign(2 * size - 1, {INT_MAX, 0});
	}

	pair<int,int> findMinCnt(pair<int,int> a, pair<int, int> b) {
		if(a.first == b.first){
			return {a.first, a.second + b.second};
		} else if(a.first < b.first){
			return {a.first, a.second};
		} else {
			return {b.first, b.second};
		}
	}

	void set(int i, int v, int x, int lx, int rx) {
		if(rx - lx == 1) {
			tree[x] = {v, 1};
			return;
		}
		int m = (lx + rx) / 2;
		if (i < m) {
			set(i,v,2*x+1, lx, m);
		} else {
			set(i,v, 2*x +2, m, rx);
		}
		tree[x] = findMinCnt(tree[2*x+1], tree[2*x+2]);
	}

	void set(int i, int v) {
		set(i,v,0, 0, size);
	}

	pair<int, int> findMin(int l, int r, int x, int lx, int rx) {
		// cout << lx << " " << rx << endl;
		if(r <= lx || l >= rx) {
			return {INT_MAX, 0};
		}
		if(lx >= l && rx <= r) {
			return tree[x];
		}

		int m = (lx + rx)/2;
		pair<int,int> first = findMin(l, r, 2*x + 1, lx, m);
		pair<int,int> second = findMin(l, r, 2*x + 2, m, rx);
		return findMinCnt(first, second);
	}

	pair<int, int> findMin(int l, int r) {
		return findMin(l, r, 0, 0, size);
	}
};

class SegTreeMin {
public:
	vector<long long> tree;
	int size;

	void init(int n) {
		// Заполняем степенью двойки
		size = 1;
		while(size < n) size *= 2;
		tree.assign(2 * size - 1, INT_MAX);
	}

	void set(int i, int v, int x, int lx, int rx) {
		if(rx - lx == 1) {
			tree[x] = v;
			return;
		}
		int m = (rx + lx) / 2;
		if(i < m) {
			set(i, v, 2*x +1, lx, m);
		} else {
			set(i, v, 2*x + 2, m, rx);
		}
		tree[x] = min(tree[2*x+1], tree[2*x+2]);
	}

	void set(int i, int v) {
		set(i, v, 0, 0, size);
	}

	long long minF(int l, int r, int x, int lx, int rx) {
		if(r <= lx || l >= rx){
			return INT_MAX;
		}
		if(lx >= l && rx <= r){
			return tree[x];
		}
		int m = (lx + rx) / 2;
		int min1 = minF(l, r, 2*x + 1, lx, m);
		int min2 = minF(l, r, 2*x + 2, m, rx);
		return min(min1, min2);
	}

	long long minF(int l, int r) {
		return minF(l, r, 0, 0, size);
	}
};

class SegTree {
	vector<long long> tree;
	int size;

	void init(int n) {
		size = 1;
		while(size < n) size *= 2;
		tree.assign(size * 2 - 1, 0);
	}

	void set(int i, int v, int x, int lx, int rx) {
		if(rx - lx == 1){
			tree[x] = v;
			return;
		}
		int m = (rx+ lx) / 2;
		if(i < m) {
			set(i,v, 2*x + 1, lx, m);
		} else {
			set(i,v, 2*x + 2, m, rx);
		}
		tree[x] = tree[2*x + 1] + tree[2*x + 2];
	}

	void set(int i, int v) {
		set(i,v,0,0,size);
	}

	long long sum(int l, int r, int x, int lx, int rx) {
		if(r <= lx || l >= rx){
			return 0;
		}

		if(r <= rx && l >= lx) {
			return tree[x];
		}
		int m = (rx + lx) / 2;

		long long sum1 = sum(l, r, 2*x +1, lx, m);
		long long sum2 = sum(l, r, 2*x + 2, m, rx);

		return sum1 + sum2;
	}

	long long sum(int l, int r){
		return sum(l,r, 0, 0, size);
	}
}

struct segTreeSum {
	vector<long long> tree;
	int size;

	void init(int n) {
		// Заполняем степенью двойки
		size = 1;
		while(size < n) size *= 2;
		tree.assign(2*size -1, 0);
	}

	void set(int i, int v, int x, int lx, int rx) {
		if(rx - lx == 1){
			tree[x] = v;
			return;
		}
		int m = (rx + lx) / 2;

		if(i < m) {
			set(i, v, 2*x + 1, lx, m);
		} else {
			set(i, v, 2*x + 2, m, rx);
		}
		tree[x] = tree[2*x + 1] + tree[2*x + 2];
	}

	void set(int i, int v) {
		set(i,v, 0, 0, size);
	}

	long long sum(int l, int r, int x, int lx, int rx) {
		if(r <= lx || l >= rx){
			return 0;
		}
		if(lx >= l && rx <= r){
			return tree[x];
		}
		int m = (lx + rx) / 2;
		long long x1 = sum(l, r, 2*x + 1, lx, m);
		long long x2 = sum(l, r, 2*x + 2, m, rx);
		return x1 + x2;
	}

	long long sum(int l, int r) {
		return sum(l, r, 0, 0, size);
	}
};

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	int n,m;
	cin >> n >> m;
	SegTreeMinCnt tree;
	tree.init(n);
	for(int i =0;i<n;i++){
		int x;
		cin >> x;
		tree.set(i, x);
	}

	for(int i = 0;i<m;i++){
		int op, x, v;
		cin >> op >> x >> v;
		if(op == 1) {
			tree.set(x, v);
		} else {
			pair<int,int> a = tree.findMin(x, v);
			cout << a.first << " " << a.second << endl;
		}
	}

	system("pause");
	return 0;
}