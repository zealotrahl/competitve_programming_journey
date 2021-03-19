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

	vector <int> arr = {1,2,3,4,5,6};


	string in;

	cin >> in;



	int ans = INT_MIN;

	do{

		int p = 0;

		int curr_ans = arr[0];

		vector <int> reconst_arr(6);

		for(int i =0;i<6;i++)
			reconst_arr[i] = arr[i];


		for(int i =0;i<in.size();i++){

			vector <int> saved_arr(6);

			for(int j=0;j<6;j++)
				saved_arr[j] = reconst_arr[j];

			if(in[i] == 'U'){
				p = 4;


				reconst_arr[0] = saved_arr[p];
				reconst_arr[1] = saved_arr[1];
				reconst_arr[2] = saved_arr[2];
				reconst_arr[3] = saved_arr[0];
				reconst_arr[4] = saved_arr[5];
				reconst_arr[5] = saved_arr[3];

			}else if(in[i] == 'D'){
				p = 3;

				reconst_arr[0] = saved_arr[p];
				reconst_arr[1] = saved_arr[1];
				reconst_arr[2] = saved_arr[2];
				reconst_arr[3] = saved_arr[5];
				reconst_arr[4] = saved_arr[0];
				reconst_arr[5] = saved_arr[4];

			}else if(in[i] == 'R'){
				p = 2;

				reconst_arr[0] = saved_arr[p];
				reconst_arr[1] = saved_arr[0];
				reconst_arr[2] = saved_arr[5];
				reconst_arr[3] = saved_arr[3];
				reconst_arr[4] = saved_arr[4];
				reconst_arr[5] = saved_arr[1];

			}else if(in[i] == 'L'){
				p = 1;

				reconst_arr[0] = saved_arr[p];
				reconst_arr[1] = saved_arr[5];
				reconst_arr[2] = saved_arr[0];
				reconst_arr[3] = saved_arr[3];
				reconst_arr[4] = saved_arr[4];
				reconst_arr[5] = saved_arr[2];

			}




			curr_ans += reconst_arr[0];
		}



		ans = max(ans, curr_ans);
	}while(next_permutation(arr.begin(), arr.end()));
	

	cout << ans;

	system("pause");
	return 0;
}


