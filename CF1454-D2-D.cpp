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

void primeFactors(long long n)  
{ 
	long long orig_n = n;
	map<long long, long long> mp;
    // Prlong long the number of 2s that divide n  
    while (n % 2 == 0)  
    {  
        mp[2]++;
        n = n/2;  
    }  
  
    // n must be odd at this polong long. So we can skip  
    // one element (Note i = i +2)  
    for (long long i = 3; i <= sqrt(n); i = i + 2)  
    {  
        // While i divides n, prlong long i and divide n  
        while (n % i == 0)  
        {  
           	mp[i]++;
            n = n/i;  
        }  
    }  
  
    // This condition is to handle the case when n  
    // is a prime number greater than 2  
    if (n > 2)
    	mp[n]++;

    long long min_max = 0;
    long long num = -1;
    for(auto x : mp){
    	if(x.second > 1 && x.second > min_max){
    		min_max = x.second;
    		num = x.first;
    	}
    }

    if(min_max == 0){
    	cout << 1 << endl;
    	cout << orig_n << endl;
    } else {
    	cout << min_max << endl;
    	for(int i =0;i<min_max - 1;i++){
    		cout << num << " ";
    	}
    	long long last = num;
    	for(auto x : mp) {
    		if(x.first != num) {
    			last *= pow(x.first, x.second);
    		}
    	}
    	cout << last;
    	cout << endl;
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
	
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		primeFactors(n); 
	}

	system("pause");
	return 0;
}