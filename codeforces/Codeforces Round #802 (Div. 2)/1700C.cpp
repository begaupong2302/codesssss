#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long A[n];
        long long minx = INT_MAX;
        long long count = 0;
        for (long long i = 0; i<n; i++){
            cin>>A[i];
            minx = (minx, A[i]);
        }
        count+= abs(minx);
        for (long long i = 0; i<n; i++){
            A[i] = A[i] - minx;
        }
        long long x;
        long long y;
        for (long long i = 0; i<n; i++){
            if (A[i] == 0){
                x = i;
            }
            if (A[n-1-i] == 0){
                y = n - 1 - i;
            }
        }
        while(x){
            int s = 0;
            long long xx = INT_MAX;
            for (long long i = 0; i<x; i++){
                xx = min(A[i], xx);
            }
            count+= xx;
            for(long long i = 0; i<x; i++){
                if (A[i] == xx && s == 0){
                    x = i;
                    s = 1;
                }
                A[i] = A[i] - xx;
            }
        }
        while(y){
            int s = 0;
            long long xx = INT_MAX;
            for (long long i = n-1; i>y; i--){
                xx = min(A[i], xx);
            }
            count+= xx;
            for(long long i = n-1; i>y; i--){
                if (A[i] == xx && s == 0){
                    y = i;
                    s = 1;
                }
                A[i] = A[i] - xx;
            }
        }
        long long maxsss = INT_MIN;
        for (long long i = 0; i<n; i++){
            if ()
        }
    }
}
