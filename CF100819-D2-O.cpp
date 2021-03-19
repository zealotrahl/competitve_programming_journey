#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>
#include <unordered_set>


using namespace std;




int graph[500][500];


int m,n;

int a,b;




int jump;




int solve(int r, int c, int current){



	int up;

	int right;
	int down;
	int left;





	if(r == 0 && c == 0 && current != 0){
		return INT_MAX;
	}


	if(r == m-1 && c == n-1){
		return current;
	}


	if(current > 25000)
		return INT_MAX;


	up = INT_MAX;
	right= INT_MAX;
	down = INT_MAX;
	left = INT_MAX;


	jump = graph[r][c];




	if(r-jump >= 0){
		up = solve(r-jump,c,current+1);

	}

	if(c+jump < n){
		right = solve(r, c+jump, current+1);


	}

	if(c-jump >= 0){
		left = solve(r, c-jump, current+1);


	}

	if(r +jump < n){
		down = solve(r+jump, c, current+1);

	}





	return min(left, (min(down,min(up,right))));



}

int main(){

	cin >> m >> n;

	string s;

	for (int i = 0; i < m; i++) {

		cin >> s;

		for (int j = 0; j < n; j++){
			graph[i][j] = s[j] - '0';
		}
		
	}




	int ans = solve(0, 0, 0);



	if(ans == INT_MAX)
		cout << "IMPOSSIBLE";
	else
		cout << ans;

	system("pause");
	return 0;
}


