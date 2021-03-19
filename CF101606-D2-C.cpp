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

  int n;
  cin >> n;

  map<string, int> mp;

  mp["red"] = 1;
  mp["yellow"] = 2;
  mp["green"] = 3;
  mp["brown"] = 4;
  mp["blue"] = 5;
  mp["pink"] = 6;
  mp["black"] = 7;

  string arr[] = {"red", "yellow", "green", "brown", "blue", "pink", "black"};
  vector<bool> used(n);
  vector<string> inp(n);
  int max_ball = 0;
  int reds = 0;
  for(int i =0;i<n;i++){
    cin >> inp[i];

    if(inp[i] == "red"){
      reds++;
    }

    if(mp[inp[i]] > max_ball){
      max_ball = mp[inp[i]];
    }
  }

  int ans = 0;
  if(max_ball != 1){
    ans += max_ball*(reds+1);
  }

  if(reds == n){
    ans = 1;
  } else {
    
    ans += reds;

    for(int i =0;i<n;i++){
      if(mp[inp[i]] != max_ball && inp[i] != "red"){
        ans += mp[inp[i]];
      }
    }
  }


  cout << ans << endl;




  return 0;
}


