#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){
	int n,m;


	cin >> n >> m;

	char arr[n][m];

	char k;

	cin >> k;

	for(int i =0;i<n;i++){
		for(int j =0;j<m;j++)
			cin >> arr[i][j];
	}

	set <char> zams;

	pair <int, int> first_ocur;
	first_ocur.first = -1;

	pair <int, int> last_ocur;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j] == k){
				if(first_ocur.first == -1){
					first_ocur.first = i;
					first_ocur.second = j;
				}

				last_ocur.first =  i;
				last_ocur.second = j;

				
			}

		}
	}


	int i = first_ocur.first;
	int j = first_ocur.second;
	
	//vertical down;
	while(i < n && arr[i][j] == k){
		int left = j-1;
		int right = j+1;
		int up = i-1;
		int down = i+1;

		if(left >= 0 && arr[i][left] != '.' && arr[i][left] != k){
			zams.insert(arr[i][left]);
		}

		if(right < m && arr[i][right] != '.' && arr[i][right] != k){
			zams.insert(arr[i][right]);
		}


		if(up >=0 && arr[up][j] != '.' && arr[up][j] != k)
			zams.insert(arr[up][j]);


		if(down < n && arr[down][j] != '.' && arr[down][j] != k)
			zams.insert(arr[down][j]);

		i++;
	}

	i = last_ocur.first;
	j = last_ocur.second;
	
	//vertical up;
	while(i >= 0 && arr[i][j] == k){
		int left = j-1;
		int right = j+1;
		int up = i-1;
		int down = i+1;

		if(left >= 0 && arr[i][left] != '.' && arr[i][left] != k){
			zams.insert(arr[i][left]);
		}

		if(right < m && arr[i][right] != '.' && arr[i][right] != k){
			zams.insert(arr[i][right]);
		}


		if(up >=0 && arr[up][j] != '.' && arr[up][j] != k)
			zams.insert(arr[up][j]);


		if(down < n && arr[down][j] != '.' && arr[down][j] != k)
			zams.insert(arr[down][j]);

		i--;
	}

	i = first_ocur.first;
	j = first_ocur.second;
	
	//horizonal right;
	while(j < m && arr[i][j] == k){
		int left = j-1;
		int right = j+1;
		int up = i-1;
		int down = i+1;

		if(left >= 0 && arr[i][left] != '.' && arr[i][left] != k){
			zams.insert(arr[i][left]);
		}

		if(right < m && arr[i][right] != '.' && arr[i][right] != k){
			zams.insert(arr[i][right]);
		}


		if(up >=0 && arr[up][j] != '.' && arr[up][j] != k)
			zams.insert(arr[up][j]);


		if(down < n && arr[down][j] != '.' && arr[down][j] != k)
			zams.insert(arr[down][j]);
			
		j++;
	}

	i = last_ocur.first;
	j = last_ocur.second;
	
	//horizonal left;
	while(j >= 0 && arr[i][j] == k){
		int left = j-1;
		int right = j+1;
		int up = i-1;
		int down = i+1;

		if(left >= 0 && arr[i][left] != '.' && arr[i][left] != k){
			zams.insert(arr[i][left]);
		}

		if(right < m && arr[i][right] != '.' && arr[i][right] != k){
			zams.insert(arr[i][right]);
		}


		if(up >=0 && arr[up][j] != '.' && arr[up][j] != k)
			zams.insert(arr[up][j]);


		if(down < n && arr[down][j] != '.' && arr[down][j] != k)
			zams.insert(arr[down][j]);
			
		j--;
	}
		

	cout << zams.size();


	return 0;
}
