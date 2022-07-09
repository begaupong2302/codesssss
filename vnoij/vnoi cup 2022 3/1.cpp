#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	ll n; cin>>n;
	ll q; cin>>q;
	while(q--){
		ll i,j,x,y; cin>>i>>j>>x>>y;
		if (abs(i+j-x-y)%2 == 1){
			cout<<"-1"<<endl;
			continue;
		}
		if (i == x && j == y){
			cout<<0<<endl;
			continue;
		}
		if (abs(i-x) == abs(j-y)){
			cout<<1<<endl;
			cout<<x<<" "<<y<<endl;
			continue;
		}else{
			cout<<2<<endl;
			ll m = (i + x - y + j)/2;
			ll z = (i - x + y + j)/2;
			if (m > 0 && z > 0){
				if (m <= n && z <= n){
					cout<<m<<" "<<z<<endl;
					cout<<x<<" "<<y<<endl;
					continue;
				}
			}
			m = (x + i + y - j)/2;
			z = (x - i + y + j)/2;
			if (m > 0 && z > 0){
				if (m <= n && z <= n){
					cout<<m<<" "<<z<<endl;
					cout<<x<<" "<<y<<endl;
					continue;
				}
			}
		}
	}
}