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
  
  int n;
  cin >> n;

  int i = 0;
  int j = 1;

  if(n == 1){
    printf("! %d\n", 1);
    fflush(stdout);
  } else {
    vector<int> ans(n);
    int l = 0;
    int r = n-1;

    while(l < r){
      printf("? %d %d\n", l+1, r+1);
      fflush(stdout);
      int first, second;
      cin >> first;
      printf("? %d %d\n", r+1, l+1);
      fflush(stdout);
      cin >> second;
      if(first > second){
        ans[l] = first;
        l++;
      } else {
        ans[r] = second;
        r--;
      }
    }

    cout << "! ";
    for(int i =0;i<n;i++){
      if(ans[i] == 0){
        ans[i] = n;
      }
      cout << ans[i] << " ";
    }
    cout << endl;
    fflush(stdout);
  }

  system("pause");
  return 0;
}