#include <bits/stdc++.h>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	int t; cin>>t;
	while(t--){
		long long n; cin>>n;
		long long A[n+1];
		A[0] = 0;
		for (long long i = 0; i<n; i++){
			cin>>A[i+1];
		}
		long long B[n+1];
		B[0] = 0;
		map<long long, long long> M;
		for (long long i = 1; i<n+1; i++){
			if (A[i] == A[i-1]){
				B[i] = B[i-1] + 1;
			}else{
				if (B[M[A[i]]] - i + M[A[i]] + 1 > 0){
					B[i] = B[M[A[i]]] - i + M[A[i]] + 2;
				}else{
					B[i] = 1;
				}
			}
			M[A[i]] = i;
		}
		long long max1 = 0;
		long long y = 0;
		for (long long i = 1; i<n+1; i++){
			if (max1 < B[i]){
				max1 = B[i];
				y = i;
			}
		}
		long long z = y+1;
		long long x;
		while (z--){
			if (B[z] == 1 && A[z] == A[y]){
				x = z;
				break;
			}
		}
		cout<<A[x]<<" "<<x<<" "<<y<<endl;
	}
}