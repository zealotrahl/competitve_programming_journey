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
  // freopen("out.txt", "r", stdin);
  // int test_out;

  // while(cin >> test_out) {}
  // freopen("output.txt", "w", stdout);
  //string s
  //getline(cin, s);
  //printf("%.9f\n", x);
  
  long long z;
  cin >> z;
  while(z--){
    long long n,k;
    cin >> n >> k;
    vector<long long> planeti(n);
    for(long long i =0;i<n;i++){
      cin >> planeti[i];
    }
    sort(planeti.begin(), planeti.end());

    stack <long long> st;
    long long counter = 0;
    bool flag = true;
    for(long long i =0;i<n;i++){
      if(planeti[i] <= k){
        st.push(planeti[i]);
      } else {
        while(k < planeti[i] && !st.empty()){
          k += st.top();
          st.pop();
          counter++;
        }
        if(k < planeti[i]){
          flag = false;
          break;
        }
        st.push(planeti[i]);
      }
    }

    if(!flag){
      cout << -1 << endl;
    } else {
      queue <long long> zahvat;
      while(!st.empty()){
        if(k < st.top()){
          k += zahvat.front();
          k -= st.top();
          zahvat.pop();
          zahvat.push(2*st.top());
          st.pop();
          counter++;
        } else{
          k -= st.top();
          zahvat.push(2*st.top());
          st.pop();
        }
      }
      cout << counter << endl;
    }


  }


  system("pause");
  return 0;
}