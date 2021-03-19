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
  
  int n, m;
  cin >> n >> m;

  vector<pair<int,int>> rebra(m);
  int min_neuch = INT_MAX;
  int max_uch = INT_MIN;
  for(int i=0;i<m;i++){
    cin >> rebra[i].first >> rebra[i].second;
    if(!rebra[i].second){
      min_neuch = min(min_neuch, rebra[i].first);
    } else{
      max_uch = max(max_uch, rebra[i].first);
    }
  }

  if(min_neuch < max_uch){
    cout << -1 << endl;
  } else {
    int vershina = 2;
    int slom_vershina = 3;
    for(int i =0;i<m;i++){
      if(rebra[i].second){
        cout << 1 << " " << vershina << endl;
        vershina++;
      } else {
        cout << 2 << " " << slom_vershina << endl;
        slom_vershina++;
      }
    }
  }


  system("pause");
  return 0;
}