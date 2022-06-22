#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t; cin>>t;
    while (t--){
        long long a,b; cin>>a>>b;
        long long X[a][b];
        long long max1 = INT_MIN;
        for (long long i = 0; i<a; i++){
            for (long long j = 0; j<b; j++){
                cin>>X[i][j];
                max1 = max(max1, X[i][j]);
            }
        }
        long long m,n;
        for (long long i = 0; i<a; i++){
            for (long long j = 0; j<b; j++){
                if (max1 == X[i][j]){
                    m = i;
                    n = j;
                }
            }
        }
        long long q,w,e,r;
        q = (m-0+1)*(n-0+1);
        w = (a-m)*(n-0+1);
        e = (a-m)*(b-n);
        r = (m+1)*(b-n);
        q = max(q,w);
        q = max(q,e);
        q = max(q,r);
        cout<<q<<endl;
    }
}
