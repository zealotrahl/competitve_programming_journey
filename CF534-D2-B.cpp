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
  
  long long v1,v2;
  cin >> v1 >> v2;
  long long t,d;
  cin >> t >> d;

  long long p = 0;
  if (v1 > v2){
    p = v2;
    v2 = v1;
    v1 = p;
  }
  long long metrov = v1 + v2;
  t -= 2;


  while(t){
    if((v1+d) - (v2 + t*d) <= 0){
      v1 += d;
    } else {
      // cout << v2 << " " << d << " " << t << endl;
      v2 += d;
      metrov += (2*v2 + d*(t-1))*t/2;
      break;
    }
    metrov += v1;
    t--;
    // cout << v1 << " ";
  }
  // cout << endl;

  cout << metrov << endl;

  system("pause");
  return 0;
}