#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long n; cin>>n;
        long long count = n;

        string s; cin>>s;
        for (long long i = 1; i< n; i++){
            if (s[i] != s[i-1]){
                count+= i;
            }
        }
        cout<<count<<endl;
    }
}
