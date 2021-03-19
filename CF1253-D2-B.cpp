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

	int n;

	cin >> n;


	vector <int> arr(n);

	int b;

	for(int i =0;i<n;i++){
		cin >> arr[i];
	}


	int d = 0;

	map <int, bool> were;

	bool negative = false;

	bool impos = false;

	int events = 0;

	vector <int> ans;

	set <int> current;

	for(int i =0;i<n;i++){

		if(arr[i] < 0)
			negative = true;
		else
			negative = false;


		int a = abs(arr[i]);

		if(were.count(a)){

			//next segment
			if(!negative){
				d++;

				if(current.size() != 0){
					impos = true;
					break;
				}


				were.clear();

				were[a] = true;

				ans.push_back(events);
				events = 0;
			}else{
				events++;
				current.erase(a);

				if(current.size() == 0){
					d++;
					were.clear();

					ans.push_back(events);
					events = 0;
				}
			}


		}else{

			if(negative){
				impos = true;
				break;
			}

			were[a] = true;

			current.insert(a);
			events++;
		}
	}

	if(current.size() != 0){
		impos = true;
	}

	if(impos)
		cout << -1;
	else{
		cout << d << endl;

		for(int  i=0;i<d;i++){
			cout << ans[i] << " ";
		}
	}
	

	system("pause");
	return 0;
}


