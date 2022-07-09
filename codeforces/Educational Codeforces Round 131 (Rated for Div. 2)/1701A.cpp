#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int main(){
	int t; cin>>t;
	while(t--){
		int a,b,c,d;
		cin>>a>>b>>c>>d;
		int count = 0;
		if (a == 1) count++;
		if (b == 1) count++;
		if (c == 1) count++;
		if (d == 1) count++;
		if (count >= 4){
			cout<<2<<endl;
			continue;
		} 
		if (count == 0){
			cout<<0<<endl;
			continue;
		}
		cout<<1<<endl;
	}
}