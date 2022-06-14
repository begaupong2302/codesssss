#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long A[n];
        for (int i = 0; i<n; i++){
            cin>>A[i];
        }
        unordered_map<int, int> M;
        for (int i = 0; i<n; i++){
            M[A[i]]++;
        }
        int count = 0;
        for (auto x : M){
            count++;
        }
        if ((n-count) %2 == 0){
            cout<<count<<endl;
        }else{
            cout<<count-1<<endl;
        }
    }
}
