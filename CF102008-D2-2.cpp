#include <bits/stdc++.h>
 
 
using namespace std;
 
const int INF = 2e9 + 3;
const int N = 2e5 + 3;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
 
 
map<string, vector<string>> gr;
set<string> used;
vector<string> order;
vector<pair<int, string>> res;
 
 
void top_sort(string cur) {
    order.push_back(cur);
    used.insert(cur);
    for (auto to : gr[cur]) {
        if (!used.count(to))
            top_sort(to);
    }
}

void solve() {
    int n;
    cin >> n;
    set<string> go;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        string pre;
        for (int j = 0; j < k; j++) {
            string s;
            cin >> s;
            if (j)
                gr[pre].push_back(s);
            pre = s;
            go.insert(s);
        }
    }
    for (auto s : go) {
        if (!used.count(s))
            top_sort(s);
    }
    cout << order.size() << endl;
    for (auto x : order)
        cout << x << endl;
}
 
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
    int t;
    t = 1;
    while (t--) {
        solve();
    }
    system("pause");
}