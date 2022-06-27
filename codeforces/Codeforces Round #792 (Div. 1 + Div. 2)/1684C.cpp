#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n,m; cin>>n>>m;
        long long A[n][m];
        for (long long i =0; i<n; i++){
            for (long long j=0; j<m; j++){
                cin>>A[i][j];
            }
        }
        long long x = 1;
        long long q = 1;
        int z = 0;
        int y = 0;
        int u = 0;
        for (long long i =0; i<n; i++){
            for (long long j=0; j<m-1; j++){
                if (A[i][j] > A[i][j+1]){
                    u = 1;
                    break;
                }
            }
            if (u == 1) break;
        }
        if (u == 0){
            cout<<1<<" "<<1<<endl;
            continue;
        }
        for (long long i =0; i<m-1; i++){
            if (i == m-2 && z == 0){
                swap(A[0][m-2], A[0][m-1]);
                x = m-2;
                y = m-1;
                break;
            }
            if (A[0][i] > A[0][i+1] && z == 0){
                x = i;
                swap(A[0][i], A[0][i+1]);
                z = 1;
            }
            if (A[0][i] > A[0][i+1] && z == 1){
                swap(A[0][i], A[0][x]);
                swap(A[0][x], A[0][i+1]);
            }
            if (A[0][i] <= A[0][i+1] && z == 1){
                q = i+1;
                break;
            }
        }
        for (long long i =0; i<m-1; i++){
            if (A[0][i] > A[0][i+1]){
                cout<<-1<<endl;
                y = 1;
                break;
            }
        }
        if (y == 1) continue;
        for (long long i = 1; i<n; i++){
            swap(A[i][x], A[i][q]);
            for (long long j = 0; j<m-1; j++){
                if (A[i][j] > A[i][j+1]){
                    cout<<-1<<endl;
                    y = 1;
                    break;
                }
            }
            if (y == 1) break;
        }
        if (y == 1) continue;
        cout<<x+1<<" "<<q+1<<endl;
    }
}
