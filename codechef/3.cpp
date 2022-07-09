#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int A[n];
		map <int, int> M;
		for (int i = 0; i<n; i++){
			cin>>A[i];
			M[A[i]]++;
		}
		int s = 0;
		for (int i = 0; i<n; i++){
			if (M[A[i]]%A[i] != 0){
				cout<<"NO"<<endl;
				s = 1;
				break;
			}
		}
		if (s == 0) cout<<"YES"<<endl;
	}
}