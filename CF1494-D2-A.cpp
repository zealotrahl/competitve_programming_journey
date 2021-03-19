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
bool check(string s) {
   int counter = 0;

   for(int i =0; i < s.size();i++) {
   	if(s[i] == '(') {
   		counter++;
   	} else{
   		counter--;
   	}

   	if(counter < 0) {
   		return false;
   	}
   }
   return counter == 0;
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	int t;
	cin >> t;
	while(t--){
		string a;
		cin >> a;
		int n = a.size();

		vector<tuple<char,char,char>> arr = {
			{'(', '(', '('},
			{'(', '(', ')'},
			{'(', ')', '('},
			{'(', ')', ')'},
			{')', '(', '('},
			{')', '(', ')'},
			{')', ')', '('},
			{')', ')', ')'}
		};

		bool flag = false;
		for(int i =0; i < 8; i++) {
			char a_c = get<0>(arr[i]);
			char b = get<1>(arr[i]);
			char c = get<2>(arr[i]);

			string s = "";
			for(int j=0;j<n;j++){
				if(a[j] == 'A'){
					s += a_c;
				} else if(a[j] == 'B'){
					s += b;
				} else {
					s += c;
				}
			}

			if(check(s)) {
				flag = true;
				break;
			}
		}
		if(flag) {
			cout << "YES" << endl;
		} else {
			cout << "NO" << endl;
		}
	}

	system("pause");
	return 0;
}