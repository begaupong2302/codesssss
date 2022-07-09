#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		map <int, int> M;		
		cout<<2<<endl;
		for (int i = 1; i<=n; i++){
			if (M[i] == 0){
				cout<<i<<" ";
				int r = 2*i;
				while(r<=n){
					cout<<r<<" ";
					M[r]++;
					r = r * 2;
				}
			}
		}
		cout<<endl;
	}
}