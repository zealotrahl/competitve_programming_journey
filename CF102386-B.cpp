#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers




int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	string a,b;

	cin >> a >> b;



	if(a == "Rock" && (b == "Lizard" || b == "Scissors")){
		cout << "First";
	}else if(a == "Lizard" && (b == "Spock" || b == "Paper")){
		cout << "First";
	}else if(a == "Spock" && (b == "Scissors" || b == "Rock")){
		cout << "First";
	}else if(a == "Scissors" && (b == "Lizard" || b == "Paper")){
		cout << "First";
	}else if(a == "Paper" && (b == "Rock" || b == "Spock"))
		cout << "First";
	else if(b == "Rock" && (a == "Lizard" || a == "Scissors"))
		cout << "Second";
	else if(b == "Lizard" && (a == "Spock" || a == "Paper")){
		cout << "Second";
	}else if(b == "Spock" && (a == "Scissors" || a == "Rock")){
		cout << "Second";
	}else if(b == "Scissors" && (a == "Lizard" || a == "Paper")){
		cout << "Second";
	}else if(b == "Paper" && (a == "Rock" || a == "Spock"))
		cout << "Second";
	else
		cout << "Tie";
	

	system("pause");
	return 0;
}

