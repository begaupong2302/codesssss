#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long A[n];
        long long B[n];
        long long count = 0;
        for (long long i = 0; i<n; i++){
            cin>>A[i];
        }
        B[0] = A[0];
        for (int i = 1; i<n; i++){
            B[i] = A[i] - A[i-1];
        }
        for (int i = 1; i<n; i++){
            if (B[i]<0){
                count+= -B[i];
                B[0]+= B[i];
            }else{
                count+= B[i];
            }
        }
        cout<<count + abs(B[0])<<endl;
    }
}
