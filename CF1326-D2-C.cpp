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
  
  ll n,k;
  cin >> n >> k;
  vector<ll> arr(n);
  vector<ll> orig(n);
  for(ll i =0;i<n;i++){
    cin >> arr[i];
    orig[i] = arr[i];
  }
  ll rem = 998244353;

  sort(arr.rbegin(), arr.rend());
  set<ll> usd;
  ll target_sum = 0;
  ll sec = 1;
  for(int i =0;i<k;i++){
    target_sum += arr[i];
    usd.insert(arr[i]);
  }

  int first = -1;
  vector<int> dists;
  dists.push_back(0);
  bool fl = true;
  for(int i =0;i<n;i++){
    if(usd.count(orig[i])){
      if(first == -1){
        first = i;
      } else {
        sec *= (i-first);
        sec %= rem;
        first = i;
      }
    }
  }


  cout << target_sum << " " << sec << endl;
  system("pause");
  return 0;
}