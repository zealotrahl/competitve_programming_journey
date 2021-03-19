#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


bool startFromOne(int n, int b, int a, int c, int d, vector <int> &arr){

	bool even = false;
	int j = 0;


	bool flag =true;


	while(b && a){

		if(even){
			arr[j] = 0;
			a--;
		}else{
			arr[j] = 1;
			b--;
		}

		even = !even;
		j++;
	}

	if(j != 0)
		j--;


	if(arr[j] == 0 && b){
		j++;
		arr[j] = 1;
		b--;
	}

	if(arr[j] == 1 && a){
		j++;
		arr[j] = 0;
		a--;
	}





		if(b){

			if(d && !c){
				flag = false;
			}else if(c){
				j++;
				arr[j] = 2;
				j++;
				c--;
				even = false;


				while(b && c){

					if(even){
						arr[j] = 2;
						c--;
					}else{
						arr[j] = 1;
						b--;
					}

					j++;
					even = !even;
				}
				j--;

				if(arr[j] == 2 && b){
					j++;
					arr[j] = 1;
					b--;
				}

				if(arr[j] == 1 && c){
					j++;
					arr[j] = 2;
					c--;
				}

				if(c || b){
					flag = false;
				}

			}else{
				flag =false;
			}
		}

		if(flag){

			if(c){

				if(!d && arr[j] == 2){

					flag =false;
				}else{

					if(arr[j] == 2){
						even = false;
					}else{
						even = true;
					}

					j++;
					while(c && d){
						
						if(even){
							arr[j] = 2;
							c--;
						}else{
							arr[j] = 3;
							d--;
						}

						even = !even;
						j++;
					}
					j--;


					if(arr[j] == 2 && d){
						j++;
						arr[j] = 3;
						d--;
					}

					if(arr[j] == 3 && c){
						j++;
						arr[j] = 2;
						c--;
					}

					if(d || c){
						flag =false;
					}

				}

			}else{

				if(d){

					if(arr[j] != 2){
						flag =false;
					}else{
						j++;
						arr[j] = 3;
						d--;
					}

					if(d){
						flag =false;
					}
				}
				
			}

		}



		if(flag){
			for(int i =1;i<n;i++){
				if(abs(arr[i] - arr[i-1]) > 1){
					flag = false;
					break;
				}
			}
		}


	return flag;
}


int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	int a,b,c,d;

	cin >> a >> b >> c >> d;

	int n = a+b+c+d;

	int o_a = a;
	int o_b = b;
	int o_c = c;
	int o_d = d;

	vector <int> arr(n);

	bool even = true;
	int j = 0;


	bool flag =true;



	while(b && a){

		if(even){
			arr[j] = 0;
			a--;
		}else{
			arr[j] = 1;
			b--;
		}

		even = !even;
		j++;
	}

	if(j != 0)
		j--;


	if(arr[j] == 0 && b){
		j++;
		arr[j] = 1;
		b--;
	}

	if(arr[j] == 1 && a){
		j++;
		arr[j] = 0;
		a--;
	}






		if(b){

			if(d && !c){
				flag = false;
			}else if(c){
				j++;
				arr[j] = 2;
				j++;
				c--;
				even = false;


				while(b && c){

					if(even){
						arr[j] = 2;
						c--;
					}else{
						arr[j] = 1;
						b--;
					}

					j++;
					even = !even;
				}
				j--;

				if(arr[j] == 2 && b){
					j++;
					arr[j] = 1;
					b--;
				}

				if(arr[j] == 1 && c){
					j++;
					arr[j] = 2;
					c--;
				}

				if(c || b){
					flag = false;
				}

			}else{
				flag =false;
			}
		}

		if(flag){

			if(c){

				if(!d && arr[j] == 2){

					flag =false;
				}else{

					if(arr[j] == 2){
						even = false;
					}else{
						even = true;
					}

					j++;
					while(c && d){
						
						if(even){
							arr[j] = 2;
							c--;
						}else{
							arr[j] = 3;
							d--;
						}

						even = !even;
						j++;
					}
					j--;


					if(arr[j] == 2 && d){
						j++;
						arr[j] = 3;
						d--;
					}

					if(arr[j] == 3 && c){
						j++;
						arr[j] = 2;
						c--;
					}

					if(d || c){
						flag =false;
					}

				}

			}else{

				if(d){

					if(arr[j] != 2){
						flag =false;
					}else{
						j++;
						arr[j] = 3;
						d--;
					}

					if(d){
						flag =false;
					}
				}
				
			}

		}



		if(flag){
			for(int i =1;i<n;i++){
				if(abs(arr[i] - arr[i-1]) > 1){
					flag = false;
					break;
				}
			}
		}



	if(!flag){
		flag = startFromOne(n,o_a, o_b, o_c,o_d,arr);
	}


	if(!flag){
		cout << "NO"; 
	}else{
		cout << "YES\n";

		for(int i =0;i<n;i++)
			cout << arr[i] << " ";
	}
	

	system("pause");
	return 0;
}


