#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

int main(){
	string s;

	int unsigned k;

	cin >> s >> k;

	if(s.size() < k){
		cout << "NO";
	}else{
		int one_l = s.size()/k;

		vector <int> alpha(26, 0);

		for(int unsigned i=0;i<s.size();i++){
			alpha[s[i]-97]++;
		}



		
		if(one_l%2 == 0){
			while(k){
				int i_o = one_l;
				for(int i =0;i<26;i++){
					if(i_o == 0)
						break;


					while(alpha[i] >= 2){
						if(i_o == 0)
							break;
							
						alpha[i] -= 2;
						i_o-=2;
					}
				}
				
				if(i_o != 0){
					cout << "NO";
					return 0;
				}
				
				k--;
			}

			cout << "YES";
		}else{
			int need = k;
			while(k){
				int i_o = one_l;
				for(int i =0;i<26;i++){
					if(i_o == 1)
						break;

					while(alpha[i] >= 2){
						if(i_o == 1)
							break;
							
						alpha[i] -= 2;
						i_o-=2;
					}
				}

				if(i_o != 1){
					cout << "NO";
					return 0;
				}
				
				k--;
			}

			int counter = 0;
			for(int i =0;i<26;i++){
				if(alpha[i] != 0)
					counter++;

				if(counter == need)
					break;
			}

			if(counter == need){
				cout << "YES";
			}else{
				cout << "NO";
			}

		}



		
	}



	return 0;
}
