#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int,int> pi;
typedef vector<pi> vpi;
typedef vector<int> vi;

#define PB push_back
#define MP make_pair
// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


struct P {
	int x, y;
	bool operator<(const P &p) {
		if (x != p.x) return x < p.x;
		else return y < p.y;
	}
};

void subsetGenerate(int n){
	for (int b = 0; b < (1<<n); b++) {
		vector<int> subset;
		for (int i = 0; i < n; i++) {
			if (b&(1<<i)) subset.push_back(i);
		}
	}
}

void permutationGenerate(int n){
	vector<int> permutation;
	for (int i = 0; i < n; i++) {
		permutation.push_back(i);
	}
	do {
	// process permutation
	} while (next_permutation(permutation.begin(),permutation.end()));
}

bool customSort(int a, int b) {
	return a < b;
}

size_t split(const std::string &txt, std::vector<std::string> &strs, char ch)
{
    size_t pos = txt.find( ch );
    size_t initialPos = 0;
    strs.clear();

    // Decompose statement
    while( pos != std::string::npos ) {
        strs.push_back( txt.substr( initialPos, pos - initialPos ) );
        initialPos = pos + 1;

        pos = txt.find( ch, initialPos );
    }

    // Add the last one
    strs.push_back( txt.substr( initialPos, std::min( pos, txt.size() ) - initialPos + 1 ) );

    return strs.size();
}


int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	vector<string> dump;
	string s;
	getline(cin, s);
	split(s, dump, ' ' );


	map<char,int> mp;
	mp['0'] = 0;
	mp['1'] = 1;
	mp['2'] = 2;
	mp['3'] = 3;
	mp['4'] = 4;
	mp['5'] = 5;
	mp['6'] = 6;
	mp['7'] = 7;
	mp['8'] = 8;
	mp['9'] = 9;
	mp['a'] = 10;
	mp['b'] = 11;
	mp['c'] = 12;
	mp['d'] = 13;
	mp['e'] = 14;
	mp['f'] = 15;
	int pascal_length = mp[dump[0][0]]*16 + mp[dump[0][1]];
	bool pascal = false;

	for(int i =1;i<dump.size();i++){
		if(i > pascal_length) {
			pascal = true;
			break;
		}

		if(mp[dump[i][0]] < 2 || mp[dump[i][0]] > 7){
			break;
		}
	}

	bool c_lang = false;


	for(int i =0;i<dump.size();i++){
		if(mp[dump[i][0]] == 0 && mp[dump[i][1]] == 0) {
			c_lang = true;
			break;
		}

		if(mp[dump[i][0]] < 2 || mp[dump[i][0]] > 7){
			// cout << dump[i][0] << dump[i][1] << endl;
			break;
		}
	}

	if(c_lang && pascal) {
		cout << "Both" << endl;
	} else if(c_lang && !pascal){
		cout << "C" << endl;
	} else if(!c_lang && pascal){
		cout << "Pascal" << endl;
	} else {
		cout << "None" << endl;
	}



	system("pause");
	return 0;
}