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
    int n;
    cin >> n;
    string s;
    cin >> s;

    string p = "abacaba";
    int c = 0;
    int counter = 0;
    for(int i =0;i<n;i++){
      c = 0;
      for(int j =i;j<min(i+7,n);j++){
        if(s[j] == p[c]){
          if(c == 6) {
            counter++;
            break;
          } else {
            c++;
          }
        }
      }
    }

    if(counter == 1){
      for(int i =0;i<n;i++){
        if(s[i] == '?'){
          s[i] = 'z';
        }
      }
      cout << "YES" << endl;
      cout << s << endl;
    } else if(counter > 1){
      cout << "NO" << endl;
    } else {
      bool flag = false;
      string backup = s;
      bool yes = false;
      for(int i =0;i<n;i++){
        c = 0;
        for(int j =i;j<min(i+7,n);j++){
          if(s[j] == p[c]){
            if(c == 6) {
              flag = true;
              break;
            } else {
              c++;
            }
          } else if(s[j] == '?') {
            s[j] = p[c];
            if(c == 6) {
              flag = true;
              break;
            } else {
              c++;
            }
          } else{
            break;
          }
        }

        if(flag) {
          counter = 0;
          for(int r = 0;r<n;r++){
            c = 0;
            for(int j =r;j<min(r+7,n);j++){
              if(s[j] == p[c]){
                if(c == 6) {
                  counter++;
                  break;
                } else {
                  c++;
                }
              }
            }
          }
          if(counter == 1){
            for(int l = 0;l<i;l++){
              if(s[l] == '?'){
                s[l] = 'z';
              }
            }
            for(int l = i+7;l<n;l++){
              if(s[l] == '?'){
                s[l] = 'z';
              }
            }
            yes = true;
            break;
          }
        }
        s = backup;
      }
      if(yes) {
        cout << "YES" << endl;
        cout << s << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }

  system("pause");
  return 0;
}