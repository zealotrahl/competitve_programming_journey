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

bool sortbysec(const pair<string ,string > &a, const pair<string, string> &b) {

	if(a.second != b.second){
		return (a.second < b.second);
	}else{
		return (a.first < b.first);
	}

}


int main(){

	int n;

	cin >> n;


	vector <pair<string, string>> att(n);


	string a,b;
	for(int i =0;i<n;i++){

		cin >> a >> b;


		att[i] = make_pair(a,b);
	}
	


	sort(att.begin(), att.end(), sortbysec);


	for(int i =0;i<n;i++){
		cout << att[i].first << " " << att[i].second << endl;
	}

	system("pause");
	return 0;
}



