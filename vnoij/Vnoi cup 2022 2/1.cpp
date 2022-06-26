#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n,m; cin>>n>>m;
    long long A[n], B[n];
    for (long long i = 0; i<n; i++){
        cin>>A[i]>>B[i];
    }
    if (n== 2){
        if (B[0] < A[1] || B[1] < A[0]){
            cout<<"YES"<<endl;
            cout<<1<<" "<<2;
            return 0;
        }else{
            cout<<"NO";
            return 0;
        }
    }
    long long x = 1;
    long long y = 2;
    for (long long i  = 2; i<n; i++){
        if (B[0] < A[i] || B[i] < A[0]){
            cout<<"YES"<<endl;
            cout<<x<<" "<<i+1;
            return 0;
        }
        if (B[i] < A[1] || B[1] < A[i]){
            cout<<"YES"<<endl;
            cout<<y<<" "<<i+1;
            return 0;
        }
        if (B[i] <= B[0]){
            A[0] = A[i];
            B[0] = B[i];
            x = i+1;
        }
        if (A[1] <= A[i]){
            A[1] = A[i];
            B[1] = B[i];
            y = i+1;
        }
    }
    cout<<"NO";
}
