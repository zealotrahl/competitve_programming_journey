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

vector<bool> prime(((int)1e5)+5, true);
void SieveOfEratosthenes() 
{ 

  
    for (int p=2; p*p<=(int)1e5; p++) 
    { 
        // If prime[p] is not changed, then it is a prime 
        if (prime[p] == true) 
        { 
            // Update all multiples of p greater than or  
            // equal to the square of it 
            // numbers which are multiple of p and are 
            // less than p^2 are already been marked.  
            for (int i=p*p; i<=(int)1e5; i += p) 
                prime[i] = false; 
        } 
    } 
  
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
	vector<long long> arr(n);
	for(int i =0;i<n;i++)
		cin >> arr[i];

	SieveOfEratosthenes();

	long long min_val = *min_element(arr.begin(), arr.end());

	set <long long> divisors;
	set <long long> more;
	for (int i=2; i<=sqrt(min_val); i++) 
	 { 
	     if (min_val%i == 0) 
	     {
	         divisors.insert(i);
	         divisors.insert(min_val/i);
	     } 
	 }

	long long ans = 1;
	for(long long i : divisors){
		// cout << i << endl;
		bool flag = true;
		for(int j =0;j<n;j++){
			if(arr[j]%i != 0){
				flag = false;
				break;
			}
		}
		if(flag){
			ans = max(ans, i);
		}
	}

	cout << ans << endl;

	system("pause");
	return 0;
}