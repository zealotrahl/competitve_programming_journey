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

bool customSort(pair<int,int> a, pair<int,int> b) {
  if(a.first == b.first)
    return a.second < b.second;
  else
    return a.first < b.first;
}

int main(){
  ios::sync_with_stdio(0);
  cin.tie(0);
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);
  //string s
  //getline(cin, s);
  //printf("%.9f\n", x);
  
  long long t;
  cin >> t;
  while(t--){
    int n,k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i =0;i<n;i++){
      cin >> arr[i];
    }

    map<int,int> diffs;

    for(int i =0;i<n;i++){
      if(arr[i]%k != 0){
        diffs[k-arr[i]%k]++;
      }
    }

    long long p = 0;
    long long steps = 0;
    for (auto x : diffs){
        int nums = x.second;
        steps = max(steps, 1ll * k * (nums-1) + x.first + 1);
    }
    cout << steps << endl;
  }

  system("pause");
  return 0;
}