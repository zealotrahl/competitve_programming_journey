#include <bits/stdc++.h>

using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")

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
  
  int n;
  cin >> n;
  vector<pair<ll,ll>> arr(n);
  for(ll i =0;i<n;i++){
    cin >> arr[i].first >> arr[i].second;
  }

  ll counter = 0;
  for(ll i =0;i<n;i++){
    for(ll j =0;j<n;j++){
      if(i == j){
        continue;
      }
      double manhet = abs(arr[i].first - arr[j].first) + abs(arr[i].second - arr[j].second);
      double euclid =  sqrt((arr[i].first - arr[j].first)*(arr[i].first - arr[j].first) + (arr[i].second - arr[j].second)*(arr[i].second - arr[j].second));
      if(manhet == euclid){
        counter++;
      }
    }
  }
  cout << counter/2 << endl;

  system("pause");
  return 0;
}