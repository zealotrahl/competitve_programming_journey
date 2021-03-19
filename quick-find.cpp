#include <iostream>
#include <vector>
#include <deque>
#include <cstdio>
#include <algorithm>
#include <set>


using namespace std;



class UnionFind{

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

		void connected(int p, int q){
			return this->data[p] == this->data[q];
		}

}

int main(){




	return 0;
}
