#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		long long A[n];
		for (int i = 0; i<n; i++){
			cin>>A[i];
		}
		long long a,b;
		if (A[0] >= A[1]){
			a = A[0];
			b = 1000 - A[1];
		}else{
			a = A[1];
			b = 1000 - A[0];
		}
		for (int i = 2; i<n; i++){
			if (b*A[i] >= (1000*a - a*A[i])){
				a = a + A[i];
			}else{
				b = b + 1000 - A[i];
			}
		}
		cout<<a*b<<endl;
	}
}