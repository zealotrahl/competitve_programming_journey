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

	int n;


	cin >> n;


	vector <int> arr(n);



	vector <vector<int>> indx(200005);

	for(int i =0;i<n;i++){
		cin >> arr[i];

		indx[arr[i]].push_back(i);
	}



	int max_s = indx[0].size();
	int start_indx = (indx[0].size() ? indx[0][indx[0].size()-1] : -1);

	int max_el = 0;

	for(int i =1;i<indx.size();i++){

		if(indx[i].size() > max_s){
			max_s = indx[i].size();

			start_indx = indx[i][indx[i].size() -1];

			max_el = i;
		}
	}



	int i = start_indx-1;

	int j = start_indx+1;




	vector <string> ans;

	string s;

	while(i>=0){

		s = "";
		
		if(arr[i] > max_el){
			s += "2 ";
		}else if(arr[i] < max_el){
			s += "1 ";
		}else{
			i--;
			continue;
		}


		s += to_string(i + 1) + " " + to_string(i+2);


		ans.push_back(s);
		i--;
	}


	while(j < arr.size()){

		s = "";


		if(arr[j] > max_el){
			s += "2 ";
		}else if(arr[j] < max_el){
			s += "1 ";
		}else{
			j++;
			continue;
		}

		s += to_string(j+1) + " " + to_string(j);


		ans.push_back(s);

		j++;
	}


	cout << ans.size() << endl;


	for(int i=0;i<ans.size();i++)
		cout << ans[i] << endl;
	

	system("pause");
	return 0;
}


