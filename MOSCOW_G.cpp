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

double findMedian(vector<int> a, 
                  int n) 
{ 
  
    // If size of the arr[] is even 
    if (n % 2 == 0) { 
  
        // Applying nth_element 
        // on n/2th index 
        nth_element(a.begin(), 
                    a.begin() + n / 2, 
                    a.end()); 
  
        // Applying nth_element 
        // on (n-1)/2 th index 
        nth_element(a.begin(), 
                    a.begin() + (n - 1) / 2, 
                    a.end()); 
  
        // Find the average of value at 
        // index N/2 and (N-1)/2 
        return (double)(a[(n - 1) / 2] 
                        + a[n / 2]) 
               / 2.0; 
    } 
  
    // If size of the arr[] is odd 
    else { 
  
        // Applying nth_element 
        // on n/2 
        nth_element(a.begin(), 
                    a.begin() + n / 2, 
                    a.end()); 
  
        // Value at index (N/2)th 
        // is the median 
        return (double)a[n / 2]; 
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
	
	int n,m,k;
	cin >> n >> m >> k;
	int mat[k][n];
	for(int i =0;i<k;i++){
		for(int j =0;j<n;j++){
			cin >> mat[i][j];
		}
	}

	int prefix_a[k][n];



	for(int i =0;i<k;i++){
		for(int j =0;j<n;j++){
			prefix_a[i][j] = mat[i][j];
		}
	}

	for(int i =0;i<k;i++){
		for(int j =1;j<n;j++){
			prefix_a[i][j] += prefix_a[i][j-1];
		}
	}


	vector<int> ans(n);
	for(int i =0;i<n;i++){
		vector<int> vertical(k);
		for(int j=0;j<k;j++){
			vertical[j] = prefix_a[j][i];
		}
		ans[i] = findMedian(vertical, vertical.size());
	}


	cout << ans[0] << " ";
	for(int i =1;i<n;i++){
		cout << ans[i] - ans[i-1] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}