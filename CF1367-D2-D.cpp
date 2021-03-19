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
    string s;
    cin >> s;
    int m;
    cin >> m;
    int n = s.size();

    map<char,int> ct;
    for(int i=0;i<n;i++){
      ct[s[i]]++;
    }
    sort(s.rbegin(), s.rend());
    vector<int> b_arr(m);
    vector<pair<int,int>> b_sorted(m);
    for(int i =0;i<m;i++){
      cin >> b_arr[i];
      cin >> b_sorted[i].first;
      b_sorted[i].second = i;
    }
    sort(b_sorted.begin(), b_sorted.end());

    int zeros = 0;
    for(int i =0;i<m;i++){
      if(b_arr[i] == 0){
        zeros++;
      }else{
        break;
      }
    }

    int start_char = 0;
    for(int i =0;i<n;i++){
      if(ct(s[i]) >= zeros){
        start_char = i;
        break;
      }
    }

    vector<char> out(m, 0);

    for(int i =0;i<m;i++){
      if(b_arr[i] == 0){
        out[i] = s[start_char];
      }
    }

    int last_val = b_sorted[0].first;
    for(int i =1;i<m;i++){
      if(last_val == b_sorted[i].first)
      candidate[b_sorted[i].second] = s[i];
      for(int j = 0;j<n;j++){
        if(abs(i-j))
      }
    }

  }

  system("pause");
  return 0;
}