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

typedef struct bin_tree_node
{
        int v;
        struct bin_tree_node *left;
        struct bin_tree_node *right;
} BTNode;
 
BTNode *create_bin_tree_node(int v)
{
    BTNode *p = new BTNode;
 
    if (p != NULL)
    {
        p->v = v;
        p->left = NULL;
        p->right = NULL;
    }
 
    return p;
}
 
void create_balanced_bin_tree(BTNode **root, int arr[], int start, int end)
{
    if (start <= end)
    {
        int mid = (start + end + 1) / 2;
 
        *root = create_bin_tree_node(arr[mid]);
        create_balanced_bin_tree(&((*root)->left), arr, start, mid - 1);
        create_balanced_bin_tree(&((*root)->right), arr, mid + 1, end);
    }
}
 
void print_bin_tree(BTNode *root)
{
    if (root != NULL)
    {
        cout << root->v << " ";
        print_bin_tree(root->left);
        print_bin_tree(root->right);
    }
}
void print_bin_tree1(BTNode *root)
{
    if (root != NULL)
    {
        print_bin_tree1(root->left);
        cout << root->v << " ";
        print_bin_tree1(root->right);
    }
}
int a,b;
vector<int> tree(100005, 0);
void go(bool chet, int zerkalo, int l, int r) {
	if(l == r) {
		if(tree[l])
			return;
		if(b) {
			tree[l] = 2;
			b--;
		} else if(a) {
			tree[l] = 1;
			a--;
		}

		if(b){
			tree[zerkalo - l] = 2;
			b--;
		} else if(a) {
			tree[zerkalo - l] = 1;
			a--;
		}
		return;
	} else {
		int mid = (l+r)/2;
		if(chet) {
			go(chet+1, zerkalo, l, mid);
		} else {
			go(chet+1, zerkalo, mid, r);
		}
	}
}
int main(){
	// ios::sync_with_stdio(0);
	// cin.tie(0);
	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//string s
	//getline(cin, s);
	//printf("%.9f\n", x);
	

	cin >> a >> b;

	int orig_a = a;
	int orig_b = b;
	if(b){
		tree[1] = 2;
		b--;
	} else {
		tree[1] = 1;
		a--;
	}

	for(int i =1; i< (int)ceil(log2(orig_a + orig_b + 1)); i++){
		int l = pow(2, i);
		int r = pow(2, i+1) - 1;

		int mid = (l+r)/2;
		go(false, l+r, l, r);
		go(true, l+r, l, r);
	}

	for(int i =0;i<orig_a + orig_b + 1;i++){
		cout << tree[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}