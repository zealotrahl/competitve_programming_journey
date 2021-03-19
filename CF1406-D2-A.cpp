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

  int t;
  cin >> t;
  while(t--){
    int n;
    cin >> n;
    vector<int> arr(n);
    map<int,int> nums;
    for(int i =0;i<n;i++){
      cin >> arr[i];
      nums[arr[i]]++;
    }

    vector<int> first;
    vector<int> second;
    for(auto const &[key, val] : nums){
      if(val == 1){
        first.push_back(key);
      } else {
        first.push_back(key);
        second.push_back(key);
      }
    }
    int cur = 0;
    int f,s;
    f = s = -1;

    for(int x : first){
      if(x != cur){
        f = cur;
        break;
      } else {
        cur++;
      }
    }
    if(f == -1){
      f = cur;
    }
    cur = 0;
    for(int x : second){
      if(x != cur){
        s = cur;
        break;
      } else {
        cur++;
      }
    }
    if(s == -1){
      s = cur;
    }

    // cout << f << " " << s << endl;

    cout << f + s << endl;
  }


  return 0;
}


