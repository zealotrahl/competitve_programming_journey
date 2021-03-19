#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>
#include <climits>

using namespace std;

int main(){


	int n;

	cin >> n;

	vector <long long> arr(n);

	for(int i=0;i<n;i++)
		cin >> arr[i];


	sort(arr.begin(), arr.end());


    for (int i=1;i<n-1;i++){
        if (arr[i-1]+arr[i]>arr[i+1]){
            cout << "YES";
            return 0;
        }
    }



    cout << "NO";


	return 0;
}
