#include <stdio.h>
#include <math.h>
#include <iostream>
 
 
using namespace std;
 
 
 
// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers
 
 
 
 
int main(){
 
	double a,d;
 
 
	int n;
 
 
 
	cin >> a >> d;
 
	cin >> n;
 
 
	double dlinna = 4*a;
 
 
 
	double initial_d = d;
 
 
 
 
	double c = 0;
 
	for(int i =0; i<n;i++){
 
		if(i != 0)
			d += initial_d;
 
 
		d = fmod(d,dlinna);
 
 
		if(d <= a){
 
 
			printf("%.10f %.10f\n", d,c);
 
		}else if(d > a && d <= 2*a){
 
 
			printf("%.10f %.10f\n", a, abs(a-d));
 
 
		}else if(d > 2*a && d <= 3*a){
			//Tretya chetver;
 
 
			printf("%.10f %.10f\n", abs(3*a-d), a);
 
 
		}else{
 
			printf("%.10f %.10f\n", c, abs(4*a-d));
 
		}
 
 
	}
 
 
	
	return 0;
}