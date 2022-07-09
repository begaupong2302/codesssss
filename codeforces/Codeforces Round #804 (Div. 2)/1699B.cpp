#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int t; cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int A[n][m];
		A[0][0] = 1;
		A[1][0] = 0;
		A[1][1] = 1;
		A[0][1] = 0;
		for (int i = 2; i<m; i++){
			if (A[0][i-2] == 0 && A[0][i-1] == 1){
				A[0][i] = 1;
			}
			if (A[0][i-2] == 0 && A[0][i-1] == 0){
				A[0][i] = 1;
			}
			if (A[0][i-2] == 1 && A[0][i-1] == 1){
				A[0][i] = 0;
			}
			if (A[0][i-2] == 1 && A[0][i-1] == 0){
				A[0][i] = 0;
			}
			if (A[1][i-2] == 0 && A[1][i-1] == 1){
				A[1][i] = 1;
			}
			if (A[1][i-2] == 0 && A[1][i-1] == 0){
				A[1][i] = 1;
			}
			if (A[1][i-2] == 1 && A[1][i-1] == 1){
				A[1][i] = 0;
			}
			if (A[1][i-2] == 1 && A[1][i-1] == 0){
				A[1][i] = 0;
			}
		}
		for (int i = 2; i<n; i++){
			for (int j = 0; j<m; j++){
				if (A[i-2][j] == 0 && A[i-1][j] == 1){
				    A[i][j] = 1;
			    }
			    if (A[i-2][j] == 0 && A[i-1][j] == 0){
				    A[i][j] = 1;
			    }
			    if (A[i-2][j] == 1 && A[i-1][j] == 1){
				    A[i][j] = 0;
			    }
			    if (A[i-2][j] == 1 && A[i-1][j] == 0){
				    A[i][j] = 0;
			    }
			}
		}
		for (int i = 0; i<n; i++){
			for (int j = 0; j<m; j++){
				cout<<A[i][j]<<" ";
			}
			cout<<endl;
		}
	}
}