#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;

// Common memset settings
//memset(memo, -1, sizeof memo); // dp memoization with -1
//memset(arr, 0, sizeof arr); //clear array of integers


void update (int v, int tl, int tr, int pos, int new_val) {
	if (tl == tr)
		t[v] = new_val;
	else {
		int tm = (tl + tr) / 2;
		if (pos <= tm)
			update (v*2, tl, tm, pos, new_val);
		else
			update (v*2+1, tm+1, tr, pos, new_val);
		t[v] = t[v*2] + t[v*2+1];
	}
}

int precalc[n][n];
void update (int i, int new_val){
	for (; i >= 0; i = (i & (-i)))
		t[i] = min (t[i], new_val);
}

int getmin (int r){
	int result = INF;
	for (; r >= 0; r = (r & (-r)))
		result = min (result, T[r]);
	return result;
}

int query(int L,int R,int blockSZ)
{
	int lid=getId(L,blockSZ);
	int rid=getId(R,blockSZ);
	if(lid==rid)
	{
		int ret=inf;
		for(int i=L; i<=R; i++)ret=min(ret,arr[i]);
		return ret;
	}
	int m1=inf,m2=inf,m3=inf;
	for(int i=L; i<(lid+1)*blockSZ; i++)m1=min(m1,arr[i]);
	for(int i=lid+1;i<rid;i++)m2=min(m2,BLOCK[i]);
	for(int i=rid*blockSZ; i<=R; i++)m3=min(m3,arr[i]);
	return MIN3(m1,m2,m3);
}

void update(int val,int indx,int blockSZ){
	int id=getId(indx,blockSZ);
	BLOCK[id]=min(BLOCK[id],val);
}

int getId(int indx,int blockSZ)
{
	return indx/blockSZ;
}

int nqubePrecalculateTable(){
	for(int i =0;i<n;i++){
		for(int j =0;j<=n;j++){
			int min_val = arr[i];
			for(int k=i;k<=j;k++){
				min_val = min(min_val, arr[k]);
			}
			precalc[i][j] = min_val;
		}
	}
}

int precalculateTable(){
	for(int i=0;i<n;i++){
		for(int j =i;j<n;j++){
			if(i == j){
				precalc[i][j] = arr[j];
				continue;
			}
			precalc[i][j] = min(precalc[i][j-1], arr[j]);
		}
	}
}

int RSQ(int i, int j, int pre[]) 
{
	if(i == 0)
		return pre[j];
	
	return pre[j] - pre[i-1];
}

void computePrefixSum(int arr[], int n, int pre[]) 
{
	pre[0] = arr[0];
	for (int i = 1; i < n; i++)
		pre[i] = arr[i] + pre[i - 1];
}


int RSQ(){
	int sum = 0;

	for(int i =0;i<arr.size();i++)
		sum += arr[i];

	return sum;
}

int RMQ(int l, int r){

	int min_val = arr[l];
	int min_indx = l;
	for(int i =l;i<=r;i++){
		if(arr[i] < min_val){
			min_val = arr[i];
			min_indx = i;
		}
	}

	return min_indx;
}

int main(){
	//ios::sync_with_stdio(0);
	//cin.tie(0);
	
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);

	for(int i =0;i<)
	

	system("pause");
	return 0;
}


