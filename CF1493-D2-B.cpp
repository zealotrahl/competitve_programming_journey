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
	
	int t;
	cin >> t;
	while(t--){
		int h,m;
		cin >> h >> m;
		string s;
		cin >> s;
		string b = "";
		b += s[0];
		b += s[1];
		int hours = stoi((b));
		b = "";
		b += s[3];
		b += s[4];
		int minutes = stoi((b));

		string string_hours;
		string string_minutes;
		vector<char> correct = {'0', '1', '2', '5', '8'};

		while(true) {
			// cout << hours << " " << minutes << endl;
			string_hours = to_string(hours);
			string_minutes = to_string(minutes);
			if(string_hours.size() == 1) {
				string_hours = "";
				string_hours += "0";
				string_hours += to_string(hours);
			}
			if(string_minutes.size() == 1) {
				string_minutes = "";
				string_minutes += "0";
				string_minutes += to_string(minutes);
			}

			// cout << string_hours << " " << string_minutes << endl;

			auto it = find(correct.begin(), correct.end(), string_hours[0]);
			if(it == correct.end()) {
				minutes = (minutes + 1)%m;
				if(minutes == 0) {
					hours = (hours + 1)%h;
				}
				continue;
			}
			it = find(correct.begin(), correct.end(), string_hours[1]);
			if(it == correct.end()) {
				minutes = (minutes + 1)%m;
				if(minutes == 0) {
					hours = (hours + 1)%h;
				}
				continue;
			}
			it = find(correct.begin(), correct.end(), string_minutes[0]);
			if(it == correct.end()) {
				minutes = (minutes + 1)%m;
				if(minutes == 0) {
					hours = (hours + 1)%h;
				}
				continue;
			}
			it = find(correct.begin(), correct.end(), string_minutes[1]);
			if(it == correct.end()) {
				minutes = (minutes + 1)%m;
				if(minutes == 0) {
					hours = (hours + 1)%h;
				}
				continue;
			}
			if(string_hours[0] == '2') {
				string_hours[0] = '5';
			} else if(string_hours[0] == '5') {
				string_hours[0] = '2';
			}
			if(string_hours[1] == '2') {
				string_hours[1] = '5';
			} else if(string_hours[1] == '5') {
				string_hours[1] = '2';
			}
			if(string_minutes[0] == '2') {
				string_minutes[0] = '5';
			} else if(string_minutes[0] == '5') {
				string_minutes[0] = '2';
			}
			if(string_minutes[1] == '2') {
				string_minutes[1] = '5';
			} else if(string_minutes[1] == '5') {
				string_minutes[1] = '2';
			}
			b = "";
			b += string_minutes[1];
			b += string_minutes[0];

			int reversed_hours = stoi((b));
			b = "";
			b += string_hours[1];
			b += string_hours[0];
			int reversed_minutes = stoi((b));

			if(reversed_hours < h && reversed_minutes < m) {
				break;
			} else {
				minutes = (minutes + 1)%m;
				if(minutes == 0) {
					hours = (hours + 1)%h;
				}
			}
		}

		string_hours = to_string(hours);
		string_minutes = to_string(minutes);
			if(string_hours.size() == 1) {
				string_hours = "";
				string_hours += "0";
				string_hours += to_string(hours);
			}
			if(string_minutes.size() == 1) {
				string_minutes = "";
				string_minutes += "0";
				string_minutes += to_string(minutes);
			}

		cout << string_hours << ":" << string_minutes << endl;
	}

	system("pause");
	return 0;
}