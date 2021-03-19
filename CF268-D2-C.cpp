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

  int n,m;
  cin >> n >> m;

  int fp = m;
  int sp = n;

  vector<pair<double,double>> points;
  while(n){
    points.clear();
    points.push_back({n,0});
    points.push_back({0,m});
    for(int i =1;i<m;i++){
      if(n - i > 0)
        points.push_back({n-i, i});
    }
    bool flag = true;
    for(int i =0;i<points.size();i++){
      for(int j =0;j<points.size();j++){
        if(i == j){
          continue;
        }
        double distance = sqrt((points[i].first - points[j].first)*(points[i].first - points[j].first) + (points[i].second - points[j].second)*(points[i].second - points[j].second));
        if(distance == (int)distance){
          flag =false;
          break;
        }
      }
      if(!flag)
        break;
    }
    if(flag){
      break;
    }
    n--;
  }
  vector<pair<double,double>> points_y;
  n = sp;
  while(m){
    points_y.clear();
    points_y.push_back({n,0});
    points_y.push_back({0,m});
    for(int i =1;i<n;i++){
      if(m - i > 0)
        points_y.push_back({i, m-i});
    }
    bool flag = true;
    for(int i =0;i<points_y.size();i++){
      for(int j =0;j<points_y.size();j++){
        if(i == j){
          continue;
        }
        double distance = sqrt((points_y[i].first - points_y[j].first)*(points_y[i].first - points_y[j].first) + (points_y[i].second - points_y[j].second)*(points_y[i].second - points_y[j].second));
        if(distance == (int)distance){
          flag =false;
          break;
        }
      }
      if(!flag)
        break;
    }
    if(flag){
      break;
    }
    m--;
  }

  if(points.size() > points_y.size()){
    cout << points.size() << endl;
    for(int i =0;i<points.size();i++){
      cout << points[i].first << " " << points[i].second << endl;
    }
  } else {
    cout << points_y.size() << endl;
    for(int i =0;i<points_y.size();i++){
      cout << points_y[i].first << " " << points_y[i].second << endl;
    }
  }


  return 0;
}


