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

  ll __lcm(ll a, ll b){
    return (a*b)/__gcd(a,b);
  }

  bool isPrime(long long n) 
  { 
      // Corner cases 
      if (n <= 1)  return false; 
      if (n <= 3)  return true; 
    
      // This is checked so that we can skip  
      // middle five numbers in below loop 
      if (n%2 == 0 || n%3 == 0) return false; 
    
      for (long long i=5; i*i<=n; i=i+6) 
          if (n%i == 0 || n%(i+2) == 0) 
             return false; 
    
      return true; 
  }

  int main(){
    // ios::sync_with_stdio(0);
    // cin.tie(0);
    //freopen("input.txt", "r", stdin);
    //freopen("output.txt", "w", stdout);
    //string s
    //getline(cin, s);
    //printf("%.9f\n", x);
    
    int t;
    cin >> t;
    while(t--){
      ll n;
      cin >> n;
      if(n&1){
        if(isPrime(n)){
          cout << n-1 << " " << 1 << endl;
        } else {
          ll pos;
          ll cur_min_lcm = INT_MAX;
          for (ll i=1; i<=sqrt(n); i++) 
          { 
              if (n%i == 0) 
              {
                ll f_lcm = __lcm(i, n-i);
                ll s_lcm = __lcm(n/i, n-n/i);
                if(i == 1){
                  s_lcm = INT_MAX;
                }
                // cout << i << " " <<63  f_lcm << " " <<  s_lcm << endl;
                if(f_lcm <= s_lcm){
                  if(f_lcm < cur_min_lcm){
                    cur_min_lcm = f_lcm;
                    pos = i;
                  }
                }
                else{
                  if(s_lcm < cur_min_lcm){
                    cur_min_lcm = s_lcm;
                    pos = n/i;
                  }
                }
              }
          }
          cout << pos << " " << n-pos << endl;
        }
      } else {
        cout << n/2 << " " << n/2 << endl;
      }
    }

    return 0;
  }