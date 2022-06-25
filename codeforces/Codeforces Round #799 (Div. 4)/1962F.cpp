#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int z = 0;
        long long n; cin>>n;
        long long A[n];
        long long B[n];
        unordered_map <int, int> M;
        for (int i = 0; i<n; i++){
            cin>>A[i];
            B[i] = A[i]%10;
            M[B[i]]++;
        }
        int x = 4;
        while(x--){
            for (int i = 0; i<= 3-x; i++){
                M[x]--;
                M[i]--;
                M[3-i-x]--;
                if (M[x] >= 0 && M[i] >= 0 && M[3-i-x] >= 0){
                    cout<<"YES"<<endl;
                    z = 1;
                    break;
                }else{
                    M[x]++;
                    M[i]++;
                    M[3-i-x]++;
                }
            }
            if (z == 1){
                break;
            }
        }
        if (z == 1){
            continue;
        }
        x = 14;
        while(x--){
            for (int i = 0; i<= 13-x; i++){
                M[x]--;
                M[i]--;
                M[13-i-x]--;
                if (M[x] >= 0 && M[i] >= 0 && M[13-i-x] >= 0){
                    cout<<"YES"<<endl;
                    z = 1;
                    break;
                }else{
                    M[x]++;
                    M[i]++;
                    M[13-i-x]++;
                }
            }
            if (z == 1){
                break;
            }
        }
        if (z == 1){
            continue;
        }
        x = 24;
        while(x--){
            for (int i = 0; i<= 23-x; i++){
                M[x]--;
                M[i]--;
                M[23-i-x]--;
                if (M[x] >= 0 && M[i] >= 0 && M[23-i-x] >= 0){
                    cout<<"YES"<<endl;
                    z = 1;
                    break;
                }else{
                    M[x]++;
                    M[i]++;
                    M[23-i-x]++;
                }
            }
            if (z == 1){
                break;
            }
        }
        if (z == 1){
            continue;
        }else{
            cout<<"NO"<<endl;
        }
    }
}
