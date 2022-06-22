#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        int n; cin>>n;
        long long A[n];
        for (int i = 0; i<n; i++){
            cin>>A[i];
        }
        long long minx = INT_MAX;
        int z;
        for (int i = 0; i<n; i++){
            minx = min(minx, A[i]);
        }
        for (int i = 0; i<n; i++){
            if (minx == A[i]){
                z = i;
                break;
            }
        }
        if (n%2 == 1){
            cout<<"Mike"<<endl;
        }else{
            if (z%2 == 0){
                cout<<"Joe"<<endl;
            }else{
                cout<<"Mike"<<endl;
            }
        }
    }
}
