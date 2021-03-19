#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;

class WeightedQuickUnion{
	private:
		int size;
		int* data;
		int* data_size;

		int root(int p){
			while(this->data[p] != p){

				this->data[p] = this->data[this->data[p]];
				p = this->data[p];
			}

			return p;
		}

	public:
		WeightedQuickUnion(int N){
			this->size = N;

			this->data = new int[N];
			this->data_size = new int[N];


			for(int i=0;i<N;i++){
				this->data[i] = i;
				this->data_size = 1;
			}
		}


		bool connected(int p, int q){
			return this->root(p) == this->root(q);
		}

		void union(int p, int q){
			int i = root(p);
			int j = root(q);
			if (i == j) return;
			
			if(sz[i] < sz[j]){
				  id[i] = j; sz[j] += sz[i];
			}
			 else { id[j] = i; sz[i] += sz[j]; } 

		}

}


class QuickUnion{
	private:
		int size;
		int* data;

		int root(int p){
			
			while(this->data[p] != p){
				p = this->data[p];
			}


			return p;
		}
		

	public:

		QuickFind(int N){
			this->size = N;
			this->data = new int[N];

			for(int i=0;i<N;i++)
				this->data[i] = i;
		}

		void union(int p, int q){
			this->data[this->root(p)] = this->root(this->data[q]);
		}

		bool connected(int p, int q){
			return this->root(p) == this->root(q);
		}

		~QuickFind{
			delete this->data;
		}

		

		

}


class QuickFind{

	private:
		int size;
		int* data;
		
	public:
		UnionFind(int N){
			this.size = N;
			this->data = new int[N];
			
			for(int i=0;i<N;i++){
				this->data[i] = i;
			}
		}

		~UnionFind(){
			delete this->data;
		}

		void union(int p, int q){
			
			for(int i=0;i<this.size;i++){
				if(this->data[i] == this->data[p]){
					this->data[i] = this->data[q];
				}
			}
		}

		bool connected(int p, int q){
			return this->data[p] == this->data[q];
		}
}

int main(){




	return 0;
}
