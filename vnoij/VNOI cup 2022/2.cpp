#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin>>n;
    long long A[n];
    for (long long i = 0; i<n ;i++){
        cin>> A[i];
    }
    long long B[n];
    long long count = 0;
    for (long long i =0; i<n; i++){
        B[i] = A[i] * 2;
        for (long long j = 0; j<n; j++){
            if (i != j){
                if (A[j]%B[i] == 0){
                     count++;
                }
            }
        }
        cout<<count*(count-1)/2<<" ";
        count = 0;
    }
}
