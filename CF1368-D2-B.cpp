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
  
  long long k;

  cin >> k;

  // cout << k << endl;
  vector<pair<char,int>> word = {{'c', 1}, {'o', 1}, {'d', 1}, {'e', 1}, {'f', 1}, {'o', 1}, {'r', 1}, {'c', 1}, {'e', 1}, {'s', 1}};


  if(k > 1) {
    int j = 0;
    while (true) {
        j %= 10;
        word[j].second++;
        long long m = 1;
        for (int i = 0; i < 10; i++) {
            m *= word[i].second;
        }
        if (m >= k)
            break;
        j++;
    }
  }

  for(int i =0;i<word.size();i++){
    for(int j =0;j<word[i].second;j++){
      cout << word[i].first;
    }
  }
  cout << endl;

  system("pause");
  return 0;
}