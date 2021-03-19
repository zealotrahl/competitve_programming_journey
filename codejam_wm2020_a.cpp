#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	
	cin >> t;
	int p = 0;
	while(t--){
		p++;
		string s;
		
		cin >> s;
		
		int ans = 0;
		
		int n = s.length();


		int I,j;
		j = I = 0;

		for(int i =0;i<n;i++){
			if(s[i] == 'I'){
				I++;
			}else if(s[i] == 'O'){
				if(I){
					I--;
					ans++;
				}else{
					j--;
				}
			}else if(s[i] == 'i'){
				j++;
			}else if(s[i] == 'o'){
				if(j == 0){
					I--;
				}else
					j--;
			}
		}
		
		printf("Case #%d: %d\n", p, ans);
	}

	system("pause");
}