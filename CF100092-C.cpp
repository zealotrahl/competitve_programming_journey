#include <iostream>
#include <fstream>
#include <string>
using namespace std;
 
int main(){
	
	ifstream fin("apbtest.in");
	ofstream fout("apbtest.out");
	
	long long n;

	fin >> n;
	
	if(n&1){

		if(n<0)
			fout << n/2 << " " << n/2 -1;
		else if(n>0)
			fout << n/2 << " " << n/2 +1;
		else
			fout << n/2 << ' ' << n/2;
	}else{
		fout << n/2 << " " << n/2;
	}
	

	return 0;
}