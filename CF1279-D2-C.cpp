#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




int main() {
    // ios_base::sync_with_stdio(0);
    // cin.tie(0), cout.tie(0);
    int arr[3] = {4, 7, 9};
   	auto p = upper_bound(arr, arr + 3, 8);
    cout << *p;
    

    system("pause");
}


