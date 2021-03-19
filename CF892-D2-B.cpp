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
  vector<int> arr(n);

  for (int i = 0; i < n; i++){
    cin >> arr[i];
  }

  int alive = 1;
  int dead = 0;
  int curr_indx = n - 1;
  for(int i =n-1;i>0;i--){
    if(i - arr[i] < curr_indx){
      dead += min(curr_indx, i) - max(0, i - arr[i]);
      curr_indx = max(0, i - arr[i]);
    }
  }

  cout << n - dead << endl;

  return 0;
}


