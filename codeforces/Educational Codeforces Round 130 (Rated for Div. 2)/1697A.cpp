#include <bits/stdc++.h>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long t; cin>>t;
    while(t--){
        long long a,b; cin>>a>>b;
        long long A[a];
        long long sum = 0;
        for (long long i = 0; i<a; i++){
            cin>>A[i];
            sum+= A[i];
        }
        if (sum - b < 0){
            cout<<"0"<<endl;
        }else{
            cout<< sum - b<<endl;
        }

    }
}
