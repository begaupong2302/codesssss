#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

const LL N = 1e9;

int main(){
	int t; cin>>t;
	while(t--){
		LL n,k; cin>>n>>k;
		LL A[n];
		for (LL i = 0; i<n; i++){
			cin>>A[i];
		}
		map <LL, LL> L;
		map <LL, LL> R;
		map <LL, LL> X;
		for (LL i = 0; i<n; i++){
			if (L[A[i]] == 0 && X[A[i]] == 0){
				L[A[i]] = i+1;
				X[A[i]] = 1;
			}
			R[A[i]] = i+1;
		}
		while(k--){
			LL a,b; cin>>a>>b;
			if (X[a] == 0 || X[b] == 0){
				cout<<"NO"<<endl;
				continue;
			}
			if (L[a] <= R[b]){
				cout<<"YES"<<endl;
			}else{
				cout<<"NO"<<endl;
			}
		}
	}
}