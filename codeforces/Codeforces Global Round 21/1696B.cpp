#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long A[n];
        for (long long i = 0; i<n; i++){
            cin>>A[i];
        }
        if (n == 1){
            if (A[0] == 0){
                cout<<0<<endl;
            }else{
                cout<<1<<endl;
            }
            continue;
        }
        long long count = 0;
        for (long long i = 0; i<n-1; i++){
            if (A[i] == 0 && A[i+1] != 0){
                count++;
            }
        }
        cout<<count<<endl;
    }
}
