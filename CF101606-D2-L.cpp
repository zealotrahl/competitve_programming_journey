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

  int x,y;
  cin >> x >> y;
  int n;
  cin >> n;

  map<pair<int,int>, vector<pair<int,int>>> mp;
  int l_x, l_y;
  for(int i =0;i<n;i++){
    cin >> l_x >> l_y;

    int h;
    cin >> h;
    l_x -= x;
    l_y -= y;
    int d = abs(l_x) + abs(l_y);
    int p = __gcd(abs(l_x), abs(l_y));
    l_x = (l_x/p);
    l_y = (l_y/p);

    mp[{l_x, l_y}].push_back({d,h});
  }

  int ans = 0;
  for(auto &[key, val] : mp){
    sort(val.begin(), val.end());
    n = val.size();
    vector<int> d;

    for(auto x : val){
      vector<int>::iterator it = lower_bound(d.begin(), d.end(), x.second);
        if (it == d.end()) d.push_back(x.second);
        else *it = x.second;
    }

      ans += d.size();
  }
  cout << ans << endl;


  return 0;
}


