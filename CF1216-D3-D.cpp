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

	int n;

	cin >> n;

	vector <long long> mechi(n);



	for(int i=0;i<n;i++){
		cin >> mechi[i];

	}







	sort(mechi.begin(), mechi.end());


	int counter = 0;


	for(int i =1;i<n;i++){
		if(counter > 1)
			break;


		if(mechi[i] != mechi[i-1]){
			counter++;
		}
	}


	if(counter > 1){

		long long y,z;

		y = 0, z = 0;


		z = mechi[0];


		for(int i =1;i<n;i++){
			z = __gcd(z, mechi[i]);
		}




		long long max_val = *max_element(mechi.begin(), mechi.end());




		long long sum = 0;

		for(int i=0;i<n;i++){
			sum += (max_val - mechi[i]);
		}



		y = sum/z;

		cout << y << " " << z;
	}else{

		int y_na = 0;

		long long sum = 0;

		for(int i =0;i<n;i++){
			if(mechi[i] != mechi[n-1]){
				y_na++;

				sum += (mechi[n-1] - mechi[i]);
			}
		}

		int z_na = __gcd(mechi[0], mechi[n-1]);

		if(y_na == 1)
			cout << y_na << " "<< sum;
		else if (z_na != 1)
			cout << y_na << " " << sum/z_na;
		else
			cout << y_na << " " << z_na;
	}




	

	system("pause");
	return 0;
}


