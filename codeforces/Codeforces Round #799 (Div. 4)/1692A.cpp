#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        int count = 0;
        if (a<b) count++;
        if (a<c) count++;
        if (a<d) count++;
        cout<< count<<endl;
    }
}
