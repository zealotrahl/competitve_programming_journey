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

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	
	string first_team;
	cin >> first_team;
	vector<tuple<string, bool, int>> first_team_players(5);
	string second_team;
	vector<tuple<string, bool, int>> second_team_players(5);

	for(int i =0;i<5;i++){
		string a;
		cin >> a;
		first_team_players[i] = make_tuple(a, true, 0);
	}

	cin >> second_team;

	for(int i =0;i<5;i++){
		string a;
		cin >> a;
		second_team_players[i] = make_tuple(a, true, 0);
	}

	int q;
	cin >> q;
	while(q--){
		string team,team_name,type;
		cin >> team >> team_name >> type;
		if(type == "scored") {
			int score;
			cin >> score;
			if(team_name == first_team) {
				for(int i =0;i<first_team_players.size();i++){
					if(get<1>(first_team_players[i])){
						get<2>(first_team_players[i]) += score;
					}
				}

				for(int i =0;i<second_team_players.size();i++){
					if(get<1>(second_team_players[i])){
						get<2>(second_team_players[i]) -= score;
					}
				}
			} else {
				for(int i =0;i<first_team_players.size();i++){
					if(get<1>(first_team_players[i])){
						get<2>(first_team_players[i]) -= score;
					}
				}

				for(int i =0;i<second_team_players.size();i++){
					if(get<1>(second_team_players[i])){
						get<2>(second_team_players[i]) += score;
					}
				}
			}
		} else {
			string first_player, second_player;
			cin >> first_player;
			string with;
			cin >> with;
			cin >> second_player;

			if(team_name == first_team) {
				for(int i =0;i<first_team_players.size();i++){
					if(get<0>(first_team_players[i]) == first_player){
						get<1>(first_team_players[i]) = false;
						break;
					}
				}
				bool found = false;
				for(int i =0;i<first_team_players.size();i++){
					if(get<0>(first_team_players[i]) == second_player){
						get<1>(first_team_players[i]) = true;
						found = true;
						break;
					}
				}

				if(!found) {
					first_team_players.push_back(make_tuple(second_player, true, 0));
				}
			} else {
				for(int i =0;i<second_team_players.size();i++){
					if(get<0>(second_team_players[i]) == first_player){
						get<1>(second_team_players[i]) = false;
						break;
					}
				}
				bool found = false;
				for(int i =0;i<second_team_players.size();i++){
					if(get<0>(second_team_players[i]) == second_player){
						get<1>(second_team_players[i]) = true;
						found = true;
						break;
					}
				}

				if(!found) {
					second_team_players.push_back(make_tuple(second_player, true, 0));
				}
			}
		}
	}
	for(int i =0;i<first_team_players.size();i++) {
		cout << get<0>(first_team_players[i]) << " (" << first_team << ") ";

		if(get<2>(first_team_players[i]) < 0) {
			cout << get<2>(first_team_players[i]);
		} else if(get<2>(first_team_players[i]) > 0) {
			cout << "+" << get<2>(first_team_players[i]);
		} else {
			cout << "0";
		}
		cout << endl;
	}


	for(int i =0;i<second_team_players.size();i++) {
		cout << get<0>(second_team_players[i]) << " (" << second_team << ") ";
		if(get<2>(second_team_players[i]) < 0) {
			cout << get<2>(second_team_players[i]);
		} else if(get<2>(second_team_players[i]) > 0) {
			cout << "+" << get<2>(second_team_players[i]);
		} else {
			cout << "0";
		}
		cout << endl;
	}

	system("pause");
	return 0;
}