#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long A[n];
        long long B[n];
        for (int i = 0; i<n; i++){
            cin>>A[i];
            B[i] = A[i]%10;
        }
        int s = 0;
        for (int i = 0; i<n; i++){
            for (int j = i+1; j<n; j++){
                for (int k = j+1; k<n; k++){
                    if ((B[i] + B[j] + B[k])%10 == 3){
                        cout<<"YES"<<endl;
                        s = 1;
                        break;
                    }
                }
                if (s == 1) break;
            }
            if (s == 1) break;
        }
        if (s == 0) cout<<"NO"<<endl;
    }
}
