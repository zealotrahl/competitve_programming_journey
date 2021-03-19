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
    vector<ll> arr(n);
    int a;
    for(int i =0;i<n;i++){
      cin >> a;
      arr[i] = a;
    }

    sort(arr.begin(), arr.end());

    ll first,second,third;
    first = arr[n-1]*arr[n-2]*arr[n-3]*arr[n-4]*arr[n-5];
    second = arr[n-1]*arr[n-2]*arr[n-3]*arr[0]*arr[1];
    third = arr[n-1]*arr[0]*arr[1]*arr[2]*arr[3];

    cout << max(third, max(first,second)) << endl;


  }


  return 0;
}


