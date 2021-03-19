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

const int MAX_VAL = 1000001; 
  
/* Updates element at index 'i' of BIT. */
void update(int i, int add, vector<int>& BIT) 
{ 
    while (i > 0 && i < BIT.size()) 
    { 
        BIT[i] += add; 
        i = i + (i & (-i)); 
    } 
} 
  
/* Returns cumulative sum of all elements of 
   fenwick tree/BIT from start upto and 
   including element at index 'i'. */
int sum(int i, vector<int>& BIT) 
{ 
    int ans = 0; 
    while (i > 0) 
    { 
        ans += BIT[i]; 
        i = i - (i & (-i)); 
    } 
  
    return ans; 
} 
  
// Returns lower bound for k in BIT. 
int findKthSmallest(int k, vector<int> &BIT) 
{ 
    // Do binary search in BIT[] for given 
    // value k. 
    int l = 0; 
    int h = BIT.size(); 
    while (l < h) 
    { 
        int mid = (l + h) / 2; 
        if (k <= sum(mid, BIT)) 
            h = mid; 
        else
            l = mid+1; 
    } 
  
    return l; 
} 
  
// Insert x into BIT. We basically increment 
// rank of all elements greater than x. 
void insertElement(int x, vector<int> &BIT) 
{ 
    update(x, 1, BIT); 
} 
  
// Delete x from BIT. We basically decreases 
// rank of all elements greater than x. 
void deleteElement(int x, vector<int> &BIT) 
{ 
    update(x, -1, BIT); 
} 
  
// Returns rank of element. We basically 
// return sum of elements from start to 
// index x. 
int findRank(int x, vector<int> &BIT) 
{ 
    return sum(x, BIT); 
} 

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	vector<int> BIT(MAX_VAL); 
	int n,q;
	cin >> n >> q;
	int a;

	for(int i =0;i<n;i++){
		cin >> a;
		insertElement(a, BIT);
	}
	for(int i =0;i<q;i++){
		cin >> a;
		bool flag = true;
		if(a < 0){
			flag = false;
		}
		a--;
		a = abs(a);
		int j = findKthSmallest(a, BIT);
		if(flag){
			insertElement(j, BIT);
		}else{
			deleteElement(j, BIT);
		}
	}
	int j = findKthSmallest(0, BIT);
	cout << j << endl;
	system("pause");
	return 0;
}