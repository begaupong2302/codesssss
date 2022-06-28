#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long A[n];
        long long count = 0;
        long long sum = 0;
        long long B[4];
        int c = 0;
        for (long long i =0; i<n; i++){
            cin>>A[i];
            sum+= A[i];
            if (A[i] != 0){
                count++;
            }
        }
        if (count == 0){
            cout<<"YES"<<endl;
            continue;
        }
        if (count == 1){
            cout<<"YES"<<endl;
        }
        if (count > 4){
            cout<<"NO"<<endl;
            continue;
        }
        for (long long i =0; i<n; i++){
            if (A[i] != 0){
                B[c] = A[i];
                c++;
            }
        }
        int z = 0;
        if (count == 2){
            if (sum == 0 || sum == B[0] || sum == B[1]){
                cout<<"YES"<<endl;
                continue;
            }else{
                cout<<"NO"<<endl;
                continue;
            }
        }
        if (count == 3){
            if (n>3){
                cout<<"NO"<<endl;
                continue;
            }else{
                if (sum == B[0] || sum == B[1] || sum == B[2]){
                    cout<<"YES"<<endl;
                    continue;
                }else{
                    cout<<"NO"<<endl;
                    continue;
                }
            }
        }
        long long countz = 0;
        if (count == 4){
            if (n - count > 0){
                cout<<"NO"<<endl;
            }else{
                for (long long i = 0; i<n; i++){
                    for (long long j = 0; j<n; j++){
                        if (sum - A[i] == A[j]){
                            countz++;
                            break;
                        }
                    }
                }
                if (countz == 4){
                    cout<<"YES"<<endl;
                }else{
                    cout<<"NO"<<endl;
                }
            }
        }
    }
}
