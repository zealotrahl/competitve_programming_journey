#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;
int graph[30005];

int visited;
int size;
int target;

bool found = false;
void dfs(int s){

	if(s == target){
		found = true;
		return;
	}

	visited = s;


	if(graph[s] != 0)
		dfs(graph[s]);

	
}


int main(){

	int n;

	cin >> n >> target;

	size = n-1;
	target--;
	

	
	for(int i=0;i<size;i++){
		graph[i] = 0;
	}
	
	int a;
	for(int i =0;i<size;i++){
		cin >> a;
		
		graph[i] = i+a;
	}

	visited = 0;
	dfs(0);


	if(found){
		cout << "YES";
	}else{
		cout << "NO";
	}


	

	


	return 0;
}
