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
    long long n,m;
    cin >> n >> m;

    vector<pair<long long,long long>> arr(m);
    for(long long i=0;i<m;i++){
      cin >> arr[i].first >> arr[i].second;
    }

    vector<tuple<long long,long long,long long, long long>> b_s(m);

    for(long long i =0;i<m;i++){
      b_s[i] = make_tuple((arr[i].first + arr[i].second*(n-1)), arr[i].first, arr[i].second, i);
    }
    sort(b_s.rbegin(), b_s.rend());

    long long out = INT_MIN;

    for(int j=0;j<m;j++){
      long long ans = get<0>(b_s[j]);
      long long bs = n-1;
      for(long long i =0;i<m;i++){
        if(i == get<3>(b_s[j]))
          continue;
        if(arr[i].first > get<2>(b_s[j])){
          ans -= get<2>(b_s[j]);
          ans += arr[i].first;
          bs--;
        }
      }
      if(bs == 0){
        ans -= get<1>(b_s[j]);
      }
      out = max(out, ans);
    }


    cout << out << endl;
  }

  system("pause");
  return 0;
}