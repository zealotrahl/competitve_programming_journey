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

int n;
int next(int i) {
  if(i == n-1)
    return 0;
  else
    return i+1;
}

int prev(int i) {
  if(i == 0)
    return n-1;
  else
    return i-1;
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
    cin >> n;
    vector<char> arr(n);
    vector<int> arr_o(n);
    for(int i =0;i<n;i++){
      cin >> arr[i];
      arr_o[i] = arr[i];
    }
    int ans = 0;


    for(int i =0;i<n;i++){
       int byut = ((int)(arr[prev(i)] == 'R')) + ((int)(arr[next(i)] == 'L'));
       if(byut == 1){
         if(arr[prev(i)] == 'R'){
           if(arr[i] == 'R'){
             arr[i] = 'L';
             ans++;
           }
         }else{
           if(arr[i] == 'L'){
             arr[i] = 'R';
             ans++;
           }
         }
       }
     }  

     int r_ans = 0;
     for(int i =n-1;i>=0;i--){
        int byut = ((int)(arr_o[prev(i)] == 'R')) + ((int)(arr_o[next(i)] == 'L'));
        if(byut == 1){
          if(arr_o[prev(i)] == 'R'){
            if(arr_o[i] == 'R'){
              arr_o[i] = 'L';
              r_ans++;
            }
          }else{
            if(arr_o[i] == 'L'){
              arr_o[i] = 'R';
              r_ans++;
            }
          }
        }
      }
      ans = min(ans, r_ans);
    cout << ans << endl;
  }

  system("pause");
  return 0;
}