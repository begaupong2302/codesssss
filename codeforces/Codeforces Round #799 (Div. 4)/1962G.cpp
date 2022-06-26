#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n,k;
        cin>>n>>k;
        long long A[n];
        for (long long i = 0; i<n; i++){
            cin>>A[i];
        }
        long long B[n];
        B[0] = 1;
        long long count = 1;
        for (long long i = 0; i<n-1; i++){
            if (A[i] < 2*A[i+1]){
                count++;
            }else{
                count = 1;
            }
            B[i+1] = count;
        }
        long long ans = 0;
        for (long long i = 0; i<n; i++){
            if (B[i] > k){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
}
