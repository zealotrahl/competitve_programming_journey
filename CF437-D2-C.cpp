#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>


using namespace std;



int main(){

	int n, m;

	cin >> n >> m;

	vector <int> arr(n);
	vector <vector <int>> svyazey(n);

	vector <int> summa(n);

	for(int i =0;i<n;i++)
		cin >> arr[i];
	
	int a,b;
	while(m){
		cin >> a >> b;

		a--;
		b--;

		svyazey[a].push_back(b);
		svyazey[b].push_back(a);
		m--;
	}



	for(int i =0;i<n;i++){
		int sum = 0;


		for(int x : svyazey[i]){
			sum += arr[x];
		}

		summa[i] = sum;
	}





	long long output = 0;
	

	for(int i =0;i<n;i++){


		long long mx = -1;

		int indx = -1;

		for(int j=0;j<n;j++){
			if(summa[j] >= 0 && arr[j] > mx){
				mx = arr[j];
				indx = j;
			}
		}


		output += summa[indx];

		summa[indx] = -1;

		for(int c = 0;c < svyazey[indx].size(); c++){
			int to = svyazey[indx][c];

			if(summa[to] >= 0)
				summa[to] -= arr[indx];
		}

	}




	cout << output;




	system("pause");
	return 0;
}


