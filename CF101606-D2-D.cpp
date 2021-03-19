#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




int main(){
  //ios::sync_with_stdio(0);
  //cin.tie(0);
  
  //freopen("input.txt", "r", stdin);
  //freopen("output.txt", "w", stdout);

  string s;
  cin >> s;

  string s_sorted;

  s_sorted.assign(s);

  sort(s_sorted.begin(), s_sorted.end());

  for(int i =0;i<s.size();i++){
    if(s[i] != s_sorted[i]){
      for(int j =i+1;j<s.size();j++){
        if(s_sorted[j] == s[i]){
          if(s_sorted[j] > s_sorted[i]){
            cout << j+1 << " " << i+1 << endl;
          } else {
            cout << i+1 << " " << j+1 << endl;
          }

          swap(s_sorted[j], s_sorted[i]);
          break;
        }
      }
    }
  }



  return 0;
}


