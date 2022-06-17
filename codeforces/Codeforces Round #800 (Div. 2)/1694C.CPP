#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int s = 1;
        long long n; cin>>n;
        long long A[n];
        for (long long i = 0; i<n; i++){
            cin>>A[i];
        }

        if (n == 1 && A[0] == 0){
            cout<<"Yes"<<endl;
            continue;
        }
        if (n == 1 && A[0] != 0){
            cout<<"No"<<endl;
            continue;
        }
        if (A[0] < 0 || A[n - 1] > 0) {
            cout << "No\n";
            continue;
        }
        long long B[n];
        B[0] = A[0];
        for (long long i = 1; i<n; i++){
            B[i] = A[i] + B[i-1];
            if (B[i] < 0 || (B[i] > 0 && B[i-1] == 0)){
                s = 0;
                break;
            }
        }
        if (s != 0 && B[n-1] == 0){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}
