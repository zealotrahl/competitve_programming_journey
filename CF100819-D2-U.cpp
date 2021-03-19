#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>
#include <string>
#include <cmath>
#include <tuple>


using namespace std;

	
int image[100][100];


int w,h,b;

int l,r,u,d;


int p;



vector <tuple<int, int, int>> nums;


void update(){


	for(int i =w*h-1;i>=0;i--){
		image[get<1>(nums[i])][get<2>(nums[i])] = get<0>(nums[i]);


		nums.pop_back();

	}
}




void blur(){

	for(int i = 0; i<h;i++){
		for(int j = 0;j<w;j++){

			p = image[i][j];

			l = j-1;
			r = j+1;
			u = i-1;
			d = i+1;



			if(r <= (w-1)){
				p += image[i][r];

				if(u < 0){
					p += image[h-1][r];
				}else{
					p += image[u][r];
				}


				if(d > (h-1)){
					p += image[0][r];
				}else{
					p += image[d][r];
				}


			}else{
				p += image[i][0];


				if(u < 0){
					p += image[h-1][0];
				}else{
					p += image[u][0];
				}


				if(d > (h-1)){
					p += image[0][0];
				}else{
					p += image[d][0];
				}

			}

			if(l >= 0){
				p += image[i][l];

				if(u < 0){
					p += image[h-1][l];
				}else{
					p += image[u][l];
				}


				if(d > (h-1)){
					p += image[0][l];
				}else{
					p += image[d][l];
				}


			}else{
				p += image[i][w-1];


				if(u < 0){
					p += image[h-1][w-1];
				}else{
					p += image[u][w-1];
				}


				if(d > (h-1)){
					p += image[0][w-1];
				}else{
					p += image[d][w-1];
				}


			}



			if(d <= (h-1)){
				p += image[d][j];
			}else{
				p += image[0][j];
			}


			if(u >= 0){
				p += image[u][j];
			}else{
				p += image[h-1][j];
			}



			nums.push_back(make_tuple(p, i, j));


		}
	}


}

int main(){

	cin >> w >> h >> b;

	for(int i =0;i<h;i++){
		for(int j=0;j<w;j++){
			cin >> image[i][j];
		}
	}



	for(int c =0;c<b;c++){
		blur();

		update();
	}


	set <int> out;


	for(int i=0;i<h;i++){
		for(int j =0;j<w;j++){
			out.insert(image[i][j]);
		}
	}

	cout << out.size();




	system("pause");
	return 0;
}


