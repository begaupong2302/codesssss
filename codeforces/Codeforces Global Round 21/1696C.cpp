#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long n;
        long long m;
        cin>>n>>m;
        long long A[n];
        long long C[n];
        for (long long i =0; i<n; i++){
            cin>>A[i];
            C[i] = A[i];
        }
        long long k; cin>>k;
        long long B[k];
        long long D[k];
        for (long long i =0; i<k; i++){
            cin>>B[i];
            D[i] = B[i];
        }
        vector< pair <long long,long long> > S1;
        vector< pair <long long,long long> > S2;
        for (long long i = 0; i<n; i++){
            long long z = 1;
            while(true){
                long long y = z*m;
                if (A[i]%z == 0 && A[i]%y != 0){
                    C[i]  = C[i]/z;
                    break;
                }
                z = z*m;
            }
        }
        for (long long i = 0; i<k; i++){
            long long z = 1;
            while(true){
                long long y = z*m;
                if (B[i]%z == 0 && B[i]%y != 0){
                    D[i] = D[i]/z;
                    break;
                }
                z = z*m;
            }
        }
        long long sum1 = A[0]/C[0];
        if (n == 1){
            S1.push_back( make_pair(C[0], sum1) );
        }
        for (long long i = 1; i<n; i++){
            if (C[i] != C[i-1]){
                S1.push_back( make_pair(C[i-1], sum1) );
                sum1 = A[i]/C[i];
            }else{
                sum1+= A[i]/C[i];
            }
            if (i == n-1){
                S1.push_back( make_pair(C[i], sum1) );
            }
        }
        long long sum2 = B[0]/D[0];
        if (k == 1){
            S2.push_back( make_pair(D[0], sum2) );
        }
        for (long long i = 1; i<k; i++){
            if (D[i] != D[i-1]){
                S2.push_back( make_pair(D[i-1], sum2) );
                sum2 = B[i]/D[i];
            }else{
                sum2+= B[i]/D[i];
            }
            if (i == k-1){
                S2.push_back( make_pair(D[i], sum2) );
            }
        }
        if (S1.size() != S2.size()){
            cout<<"NO"<<endl;
            continue;
        }
        int a = 0;
        for (long long i = 0; i<S1.size(); i++){
            if (S1[i].first != S2[i].first || S1[i].second != S2[i].second){
                cout<<"NO"<<endl;
                a = 1;
                break;
            }
        }
        if (a == 0) cout<<"YES"<<endl;
    }
}
