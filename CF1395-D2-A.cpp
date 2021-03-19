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
    long long w;
    vector<long long> arr(3);
    cin >> arr[0] >> arr[1] >> arr[2] >> w;

    sort(arr.begin(), arr.end());
    int counter = (int)(w&1) + (int)(arr[1]&1) + (int)(arr[2]&1) + (int)(arr[0]&1);

    // cout << w << " " << arr[1] << " " << arr[2] << endl;
    int rm = arr[0];

    if(counter > 1 && rm != 0){
      int j = 0;
      while(rm > 0 && j < 3){
        w += 3;
        arr[0]--;
        arr[1]--;
        arr[2]--;
        counter = min(counter, (int)(w&1) + (int)(arr[1]&1) + (int)(arr[2]&1) + (int)(arr[0]&1));
        j++;
        rm--;
      }
    }

    if(counter > 1){
      cout << "NO" << endl;
    } else{
      cout << "YES" << endl;
    }
  }

  system("pause");
  return 0;
}