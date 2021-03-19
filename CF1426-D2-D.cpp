#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<long long,long long> pi;
typedef vector<pi> vpi;
typedef vector<long long> vi;

#define PB push_back
#define MP make_pair
// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of long longegers


struct P {
	long long x, y;
	bool operator<(const P &p) {
		if (x != p.x) return x < p.x;
		else return y < p.y;
	}
};

void subsetGenerate(long long n){
	for (long long b = 0; b < (1<<n); b++) {
		vector<long long> subset;
		for (long long i = 0; i < n; i++) {
			if (b&(1<<i)) subset.push_back(i);
		}
	}
}

void permutationGenerate(long long n){
	vector<long long> permutation;
	for (long long i = 0; i < n; i++) {
		permutation.push_back(i);
	}
	do {
	// process permutation
	} while (next_permutation(permutation.begin(),permutation.end()));
}

bool customSort(long long a, long long b) {
	return a < b;
}

vector< pair<long long, long long> > findSubArrays(vector<long long> arr, long long n) 
{ 
	set<long long> used;
    // create an empty map 
    unordered_map<long long, vector<long long> > map; 
   
    // create an empty vector of pairs to store 
    // subarray starting and ending index 
    vector <pair<long long, long long>> out; 
   
    // Malong longains sum of elements so far 
    long long sum = 0; 
   
    for (long long i = 0; i < n; i++) 
    { 
        // add current element to sum 
        sum += arr[i]; 
   
        // if sum is 0, we found a subarray starting 
        // from index 0 and ending at index i 
        if (sum == 0){
        	out.push_back(make_pair(0, i));
        }
   
        // If sum already exists in the map there exists 
        // at-least one subarray ending at index i with 
        // 0 sum 
        if (map.find(sum) != map.end()) 
        { 
            // map[sum] stores starting index of all subarrays 
            vector<long long> vc = map[sum]; 
            for (auto it = vc.begin(); it != vc.end(); it++) 
                out.push_back(make_pair(*it + 1, i)); 
        } 
   
        // Important - no else 
        map[sum].push_back(i); 
    } 
   
    // return output vector 
    return out; 
} 

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//prlong longf("%.9f\n", x);
	
	long long n;
	cin >> n;
	vector<long long> arr(n);

	for(long long i =0;i<n;i++){
		cin >> arr[i];
	}

	vector<pair<long long, long long> > out = findSubArrays(arr, n); 

	sort(out.begin(), out.end());
	long long nums = 0;
	long long curr_indx = -1;
	for(long long i =0;i<out.size();i++){
		if(out[i].first >= curr_indx){
			nums++;
			curr_indx = out[i].second;
		}
	}

	cout << nums << endl;

	system("pause");
	return 0;
}