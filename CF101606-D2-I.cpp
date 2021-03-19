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
  vector<int> settings(n);
  for(int i =0;i<n;i++)
    cin >> settings[i];

  int t;

  cin >> t;

  int loss = INT_MAX;
  int best_set = -1;
  for(int x : settings){
    if(t%x < loss){
      loss = t%x ;
      best_set = x;
    }
  }

  cout << best_set << endl;

  return 0;
}



