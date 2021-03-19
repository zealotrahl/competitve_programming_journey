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
  
  int n,k;
  cin >> n >> k;
  map<int, int> mp_m;
  map<int, int> mp_b;

  vector<int> arr_m(n);
  vector<int> arr_b(n);

  int a;
  int bashar, makhmud;
  bashar = makhmud = 0;

  for(int i =0;i<n;i++)
    cin >> arr_m[i];
  for(int i =0;i<n;i++)
    cin >> arr_b[i];


  for(int i =n-1;i>=0;i--){
    int a = arr_m[i];
    if(mp_m.count(a)){
      makhmud += mp_m[a];
    }
    if(a < k){
      mp_m[k - a]++;
    }
  }
  for(int i =n-1;i>=0;i--){
    int a = arr_b[i];
    if(mp_b.count(a)){
      bashar += mp_b[a];
    }
    if(a < k){
      mp_b[k-a]++;
    }
  }

  // cout << makhmud << " " << bashar <<endl;
  if(makhmud == bashar){
    cout << "Draw" << endl;
  }else if(makhmud > bashar){
    cout << "Mahmoud" << endl;
  }else{
    cout << "Bashar" << endl;
  }



  system("pause");
  return 0;
}