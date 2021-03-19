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
  cin >>t;

  while(t--){
    int n,m;
    cin >> n >> m;

    int arr[n][m];
    for(int i =0;i<n;i++){
      for(int j=0;j<m;j++){
        cin >> arr[i][j];
      }
    }

    bool ashish = true;
    bool disp = false;
    for(int c =0;c<min(n,m);c++){
      bool found = false;
      for(int i =0;i<n;i++){
        if(found){
          break;
        }
        for(int j =0;j<m;j++){
          if(arr[i][j] == 0){
            bool valid = true;
            for(int k = j;k<m;k++){
              if(arr[i][k] == 1){
                valid = false;
              }
            }
            for(int k = j;k>=0;k--){
              if(arr[i][k] == 1){
                valid = false;
              }
            }
            for(int k = i;k<n;k++){
              if(arr[k][j] == 1){
                valid = false;
              }
            }
            for(int k = i;k>=0;k--){
              if(arr[k][j] == 1){
                valid = false;
              }
            }
            if(valid){
              arr[i][j] = 1;
              found = true;
              break;
            }
          }
        }
      }
      if(!found){
        disp = true;
        if(ashish)
          cout << "Vivek" << endl;
        else
          cout << "Ashish" << endl;
        break;
      }
      ashish = !ashish;
    }

    if(!disp){
      if(ashish)
        cout << "Vivek" << endl;
      else
        cout << "Ashish" << endl;
    }


  }

  

  system("pause");
  return 0;
}