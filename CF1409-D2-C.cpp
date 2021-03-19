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
    int n,x,y;
    cin >> n >> x >> y;

    int diff = y-x;

    int start_pos;
    int max_curr = INT_MAX;
    int ans_start = -1;
    int ans_diff = -1;
    for(start_pos = 1; start_pos <= 50; start_pos++){
      int diff = 1;

      for(diff = 1; diff <= 49; diff++){
        bool found_x = false;
        bool found_y = false;
        bool pos = false;

        int curr = start_pos;
        int curr_n = n;
        while(curr_n){
          if(curr == x){
            found_x = true;
          }else if(curr == y){
            found_y = true;
          }
          curr += diff;
          curr_n--;
        }

        if(found_x && found_y){
          if(max_curr > curr){
            max_curr = curr;
            ans_start = start_pos;
            ans_diff = diff;
          }
        }
      }
    }

    for(int i =0;i<n;i++){
      cout << ans_start << " ";
      ans_start += ans_diff;
    }
    cout << endl;
  }

  system("pause");
  return 0;
}