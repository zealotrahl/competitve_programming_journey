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
  
  string s1;
  cin >> s1;
  string s2;
  cin >> s2;

  char mp[s1.size()][s1.size()];

  int n  = s1.size();
  for(int j =0;j<n;j++){
    mp[0][j] = s1[j];
  }
  for(int j =0;j<n;j++){
    mp[1][j] = s2[j];
  }
  int first, second, middle;
  first = second = middle = 0;
  for(int i =0;i<2;i++){
    for(int j =0;j<n;j++){
      if(mp[i][j] == '#'){
        if(i == 0){
          if(mp[1][j] == '#'){
            middle++;
            continue;
          }
          first++;
        } else {
          if(mp[0][j] == '#'){
            continue;
          }
          second++;
        }
      }
    }
  }

  if(first != 0 && second != 0 && middle == 0){
    cout << "NO" << endl;
  }else{
    cout << "YES" << endl;
    for(int i =0;i<first+middle;i++)
      cout << '#';
    for(int i =first+middle;i<n;i++)
      cout << '.';
    cout << endl;
    for(int i =0;i<first;i++)
      cout << '.';
    for(int i =0;i<middle+second;i++)
      cout << '#';

    for(int i = first + middle + second;i<n;i++)
      cout << '.';
    cout << endl;
  }

  system("pause");
  return 0;
}
