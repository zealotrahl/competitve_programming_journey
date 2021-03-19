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

int gcd (int a, int b, int & x, int & y) {
	if (a == 0) {
		x = 0; y = 1;
		return b;
	}
	int x1, y1;
	int d = gcd (b%a, a, x1, y1);
	x = y1 - (b / a) * x1;
	y = x1;
	return d;
}
 
bool find_any_solution (int a, int b, int c, int & x0, int & y0, int & g) {
	g = gcd (abs(a), abs(b), x0, y0);
	if (c % g != 0)
		return false;
	x0 *= c / g;
	y0 *= c / g;
	if (a < 0)   x0 *= -1;
	if (b < 0)   y0 *= -1;
	return true;
}

void shift_solution (int & x, int & y, int a, int b, int cnt) {
	x += cnt * b;
	y -= cnt * a;
}
 
int find_all_solutions (int a, int b, int c, int minx, int maxx, int miny, int maxy) {
	int x, y, g;
	if (! find_any_solution (a, b, c, x, y, g))
		return 0;
	a /= g;  b /= g;
 
	int sign_a = a>0 ? +1 : -1;
	int sign_b = b>0 ? +1 : -1;
 
	shift_solution (x, y, a, b, (minx - x) / b);
	if (x < minx)
		shift_solution (x, y, a, b, sign_b);
	if (x > maxx)
		return 0;
	int lx1 = x;
 
	shift_solution (x, y, a, b, (maxx - x) / b);
	if (x > maxx)
		shift_solution (x, y, a, b, -sign_b);
	int rx1 = x;
 
	shift_solution (x, y, a, b, - (miny - y) / a);
	if (y < miny)
		shift_solution (x, y, a, b, -sign_a);
	if (y > maxy)
		return 0;
	int lx2 = x;
 
	shift_solution (x, y, a, b, - (maxy - y) / a);
	if (y > maxy)
		shift_solution (x, y, a, b, sign_a);
	int rx2 = x;
 
	if (lx2 > rx2)
		swap (lx2, rx2);
	int lx = max (lx1, lx2);
	int rx = min (rx1, rx2);
 
	return (rx - lx) / abs(b) + 1;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	int T;
	cin >> T;
	while(T--){
		double h,c,t;
		cin >> h >> c >> t;
		long long x = 1e6;
		double diff = INT_MAX;
		while (true && x > 1){
			long long left = ceil(((x/2)*h + (x/2)*c)/x);
			long long right = ceil(((x+x/2)*h + (x+x/2)*c)/(3*x));

			long long d_l = abs(t-left);
			long long d_r = abs(t-right);
			cout << x << " " << d_l << " " << d_r << endl;
			if(d_l > diff && d_r > diff){
				break;
			}

			if(d_l <= d_r){
				x /= 2;
				diff = d_l;
			}else{
				x += x/2;
				diff = d_r;
			}
		}

		long long l = (x*h + x*c)/(2*x);
		long long r = (x*h + (x-1)*c)/(2*x-1);

		long long d_l = abs(t-l);
		long long d_r = abs(t-r);
		if(d_l < d_r){
			cout << 2*x << endl; 
		}else{
			cout << 2*x-1 << endl;
		}
	}

	system("pause");
	return 0;
}