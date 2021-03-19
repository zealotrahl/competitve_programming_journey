#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


void allPossibleSubset(int arr[],int n)
{

}




int main(){

	vector <int> meshki(4);


	for(int i =0;i<4;i++)
		cin >> meshki[i];

	int  count = pow(2,4);

	bool flag = false;


	for (int i = 0; i < count; i++)
	{

		int first = 0;
		int second =0;


		for (int j = 0; j < 4; j++)
		{

			if ((i & (1 << j)) > 0){
				first += meshki[j];
			}else
				second += meshki[j];
		}

		if(first == second){
			flag = true;
			break;
		}
	}

	if(flag)
		cout << "YES\n";
	else
		cout << "NO\n";


	

	system("pause");
	return 0;
}


