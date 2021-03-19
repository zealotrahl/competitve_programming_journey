#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <sstream>
#include <string>


using namespace std;

int main(){

	int T;

	cin >> T;
	cin.ignore();
	
	while(T){
		
		string sentence = "";
		getline(std::cin, sentence);
		
		sentence[0] = sentence[0]+32;

		for(int unsigned i=0;i<sentence.size();i++){
			if((int)sentence[i] == 32)
				continue;

			int unsigned j;
			for(j=i;j<sentence.size();j++){
				if((int)sentence[j] == 32)
					break;
			}

			char f_char = sentence[i];
			sentence.insert(j,"ay");
			
			
			for(int unsigned k=i;k<j-1;k++){
				sentence[k] = sentence[k+1];
			}

			sentence[j-1] = f_char;

			i = j+2;
		}

		sentence[0] = sentence[0]-32;

		cout << sentence << "\n";


		T--;
	}


	return 0;
}
