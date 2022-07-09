#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long A[n];
        int s = 0;
        for (long long i = 0; i<n; i++){
            cin>>A[i];
            if (A[i] != 0){
                s = 1;
            }
        }
        if (s == 0){
            cout<<"0"<<endl;
            continue;
        }
        int a = 0;
        int b = 0;
        for (long long i = 0; i<n-1; i++){
            if (A[i] != 0 && A[i+1] == 0){
                a = 1;
            }
            if (A[i] == 0 && A[i+1] != 0 && a == 1){
                b = 1;
            }
        }
        if (a == 1 && b == 1){
            cout<<2<<endl;
        }else{
            cout<<1<<endl;
        }
    }
}
