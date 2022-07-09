#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int t; cin>>t;
	while(t--){
		long long n;
		cin>>n;
		if (n%2 == 1){
			cout<<-1<<endl;
			continue;
		}
		n = n/2;
		long long r = n ^ 0;
		cout<<r<<" "<<r<<" "<<0<<endl;
	}
}