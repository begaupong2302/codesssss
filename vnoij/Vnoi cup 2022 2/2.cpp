#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m,k; cin>>n>>m>>k;
    long long A[n][m];
    long long B[n][m];
    for (int i = 0; i<n; i++){
        for (int j = 0; j<m; j++){
            cin>>A[i][j];
            if (j == 0){
                B[i][0] = A[i][0];
            }
            if (j > 0){
                B[i][j] = B[i][j-1] + A[i][j];
            }
        }
    }
    int a = k%m;
    int b = (k-a)/m;
    long long x1 = 0;
    long long x2 = 0;
    long long X[n], Y[n];
    for (int i = 0; i<n; i++){
        X[i] = B[i][m-1];
        Y[i] = B[i][a-1];
    }
    sort(X, X+n);
    sort(Y, Y+n);
    for (int i = n-1; i>n-1-b ; i--){
        x1+= X[i];
    }
    x1+= Y[a-1];
    for (int i = n-2; i>n-2-b; i--){
        x2+= X[i];
    }
    x2+= Y[n-1];
    cout<<max(x1,x2);
}
