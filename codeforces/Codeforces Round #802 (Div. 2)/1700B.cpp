#include <bits/stdc++.h>

using namespace std;

int  main(){
    long long t; cin>>t;
    while(t--){
        long long n;
        string a;
        cin>>n>>a;
        string b;
        if (n == 1){
            if (a[0] == '9'){
                cout<<2<<endl;
            }else{
                cout<<1<<endl;
            }
        }
        if (a[0] == '9'){
            int z = 0;
            for (long long i = n-1; i>=0; i--){
                if (a[i] + z> 49){
                    b = char(58 + 49 - a[i] - z) + b;
                    z = 1;
                }else{
                    b = char(48 + 49 - a[i] - z) + b;
                    z = 0;
                }
            }
        }else{
            int s = 0;
            for (long long i = n-1; i>= 0; i--){
                b = char(48 + 57 - a[i]) + b;
            }
        }
        cout<<b<<endl;
    }
}
