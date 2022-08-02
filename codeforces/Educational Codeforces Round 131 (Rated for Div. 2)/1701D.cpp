#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

const LL N = 5e5 + 5;

int main(){
	int t; cin>>t;
	while(t--){
		LL n; cin>>n;
		LL A[N],B[N];
		pair <LL, LL> M[N];
		for (LL i = 1; i<=n; i++){
			cin>>A[i];
			if (A[i] == 0){
				M[i] = make_pair(i+1,n);
				for (LL j = i+1; j<n; j++){
					
				}
			}else{
				M[i] = make_pair(i/(x+1) + 1, i/x);
			}
		}

	}
}