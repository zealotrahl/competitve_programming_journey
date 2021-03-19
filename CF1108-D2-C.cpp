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

  string variants[] = {"RGB", "RBG", "GRB", "GBR", "BRG", "BGR"};

  int n;
  cin >> n;
  string s;
  cin >> s;
  int prob = 0;
  int ans = INT_MAX;

  for(int i =0;i<6;i++){
    string variant = variants[i];
    int counter = 0;
    for(int j =0;j<n;j++){
      if(j%3 == 0 && s[j] != variant[0]){
        counter++;
      } else if(j%3 == 1 && s[j] != variant[1]){
        counter++;
      } else if(j%3 == 2 && s[j] != variant[2]){
        counter++;
      }
    }
    if(counter < ans){
      prob = i;
      ans = counter;
    }
  }

  cout << ans << endl;
  for(int j =0;j<n;j++){
    string variant = variants[prob];
    if(j%3 == 0 && s[j] != variant[0]){
      s[j] = variant[0];
    } else if(j%3 == 1 && s[j] != variant[1]){
      s[j] = variant[1];
    } else if(j%3 == 2 && s[j] != variant[2]){
      s[j] = variant[2];
    }
  }
  cout << s << endl;


  return 0;
}
