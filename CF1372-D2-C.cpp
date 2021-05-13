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
  
  int t;

  cin >> t;
  while(t--){
    long long n;
    cin >> n;
    vector <long long> arr(n);
    for(long long i =0;i<n;i++){
      cin >> arr[i];
    }
    int answer = 1;
    int counter = 0;
    int step = 0;
    for(int i =0;i<n;i++){
      if(arr[i] == i+1){
        if(step == 1) {
        	step = 2;
        }
      } else {
      	counter++;
      	if(step == 0) {
      		step = 1;
      	} else if(step == 2) {
      		answer = 2;
      		break;
      	}
      }
    }
    if (counter == 0) {
      cout << 0 << endl;
    } else {
    	cout << answer << endl;
    }
  }

  system("pause");
  return 0;
}