#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int main(){
	int t; cin>>t;
	while(t--){
		LL n,k; cin>>n>>k;
		string s; cin>>s;
		LL count = 0;
		LL l,r = 0;
		int q = 0;
		for (LL i = 0; i<n; i++){
			if (s[i] == '1'){
				count++;
			}
			if (s[i] == '1' && q == 0){
				l = i;
				q = 1;
			}
			if (s[i] == '1' && q == 1){
				r = i;
			}
		}
		if (count == 0){
			cout<<0<<endl;
			continue;
		}
		if (count == 1){
				if (k >= n-1-l){
					cout<<1<<endl;
					continue;
				}
				if (k >= l){
					cout<<10<<endl;
					continue;
				}
				cout<<11<<endl;
				continue;
		}
		if (count >= 2){
			if (k >= n-1-r+l){
				cout<<count*11-11<<endl;
				continue;
			}
			if (k >= n-1-r){
				cout<<count*11-10<<endl;
				continue;
			}
			if (k >= l){
				cout<<count*11-1<<endl;
				continue;
			}
			cout<<count*11<<endl;
		}
	}
}