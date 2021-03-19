#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


map <int, bool> first_row;
map <int, bool> second_row;
	
int findspos(int row, int a){

	if(row == 1){


		if(second_row.count(a-1)){
			second_row[a-1] = true;
			return a-1;
		}

		if(second_row.count(a)){
			second_row[a] = true;
			return a;
		}

		if(second_row.count(a+1)){
			second_row[a+1] = true;
			return a+1;
		}





	}else{
		if(first_row.count(a-1)){
			first_row[a-1] = true;
			return a-1;
		}

		if(first_row.count(a)){
			first_row[a] = true;
			return a;
		}

		if(first_row.count(a+1)){
			first_row[a+1] = true;
			return a+1;
		}
	}
}

bool adjacent(int row, int a){
	bool flag =false;

	if(row == 1){

		if(second_row.count(a+1)){
			second_row[a+1] = true;
			flag =true;
		}

		if(second_row.count(a-1)){
			second_row[a-1] = true;
			flag =true;
		}

		if(second_row.count(a)){
			second_row[a] = true;
			flag = true;
		}



	}else{
		if(first_row.count(a+1)){
			first_row[a+1] = true;
			flag =true;
		}

		if(first_row.count(a-1)){
			first_row[a-1] = true;
			flag =true;
		}

		if(first_row.count(a)){
			first_row[a] = true;
			flag = true;
		}
	}

	return flag;
}

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int n,q;

	cin >> n >> q;

	vector <pair<int,int>> kletki(q);

	for(int i =0;i<q;i++)
		cin >> kletki[i].first >> kletki[i].second;


	vector <bool> ans(q);

	ans[0] = true;


	int num = 0;



	if(kletki[0].first == 1){
		first_row[kletki[0].second] = false;
	}else{
		second_row[kletki[0].second] = false;
	}

	bool deleted = false;
	for(int i =1;i<q;i++){


		pair <int, int> cur = kletki[i];


		if(cur.first == 1){
			if(first_row.count(cur.second)){


	
				first_row.erase(cur.second);
				deleted = true;
			}else{


				deleted = false;
			}
			
		}else{
			if(second_row.count(cur.second)){



				second_row.erase(cur.second);
				deleted = true;


			}else{

				deleted = false;
			}
			
		}

		if(!deleted){

			if(adjacent(cur.first, cur.second)){

				if(cur.first == 1){
					first_row[cur.second] = true;
				}else{
					second_row[cur.second] = true;
				}

				num++;
			}else{
				if(cur.first == 1){
					first_row[cur.second] = false;
				}else{
					second_row[cur.second] = false;
				}
			}
		}


		if(num){
			ans[i] = false;
		}else{
			ans[i] = true;
		}


	}

	for(int i =0;i<q;i++){
		if(ans[i]){
			cout << "Yes\n";
		}else{
			cout << "No\n";
		}

	}
	

	system("pause");
	return 0;
}

