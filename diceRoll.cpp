#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

void diceRollHelper(int dice, vector<int>& chosen);
void diceRoll(int dice);

void diceSumHelper(int dice, int desiredSum, int sumSoFar, vector<int>& chosen);
void diceSum(int dice, int desiredSum);

int main(){

	diceSum(10, 15);


	return 0;
}

void diceRollHelper(int dice, vector<int>& chosen){
	if(dice == 0){
		for(int unsigned i =0;i<chosen.size();i++){
			cout << chosen[i] << ", ";
		}
		cout << endl;
	}else{

		for(int i=1;i<=6;i++){
			//choose
				chosen.push_back(i);
			//explore
				diceRollHelper(dice-1,chosen);
			//unchoose
				chosen.pop_back();
		}
	}

}

void diceRoll(int dice){
	vector<int> chosen;

	diceRollHelper(dice, chosen);
}

void diceSumHelper(int dice, int desiredSum, int sumSoFar, vector<int>& chosen){
	if(dice == 0){

		if(sumSoFar == desiredSum){
			for(int unsigned i =0;i<chosen.size();i++){
				cout << chosen[i] << ", ";
			}

			cout << endl;
		}

	}else{

		for(int i=1;i<=6;i++){
			if(sumSoFar + i + 1*(dice-1) <= desiredSum && sumSoFar + i + 6*(dice-1) >= desiredSum){
				//choose
					chosen.push_back(i);
				//explore
					diceSumHelper(dice-1, desiredSum, sumSoFar+i, chosen);
				//unchoose
					chosen.pop_back();
			}
		}
	}
}

void diceSum(int dice, int desiredSum){
	vector<int> chosen;

	diceSumHelper(dice, desiredSum, 0, chosen);
}
