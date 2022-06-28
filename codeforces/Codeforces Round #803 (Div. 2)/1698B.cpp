#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long A[n];
        for (long long i =0; i<n; i++){
            cin>>A[i];
        }
        if (k == 1){
            if (n%2 == 0){
                cout<<n/2 -1<<endl;
            }else{
                cout<<(n-1)/2<<endl;
            }
        }
        if (k >= 2){
            long long count = 0;
            for (long long i=1; i<n-1; i++){
                if (A[i] > A[i-1] + A[i+1]){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
}
