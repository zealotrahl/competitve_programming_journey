#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

bool mysort( const vector <int> &a, const vector <int> &b){

	return (a[0] < b[0]);

}

int main(){

	int n,f;

	cin >> n >> f;


	vector <vector<int>> out(n);

	int k,l;
	for(int i =0;i<n;i++){
		cin >> k >> l;


		int second = min(2*k, l);
		int third = min(k, l);
		int first = second - third;
		

			
		out[i] = {first, second, third};

	}

	sort(out.begin(), out.end(), mysort);


	long long sum = 0;
	
	for(int i = n-1;i>=0;i--){
		if(f == 0){
			sum += out[i][2];
		}else{
			sum += out[i][1];
			f--;
		}
	}

	

	cout << sum;


	return 0;
}
