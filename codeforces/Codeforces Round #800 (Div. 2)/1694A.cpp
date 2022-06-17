#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        long long a,b; cin>>a>>b;
        string S = "";
        if (a>=b){
            while(a--){
                if (b != 0){
                    b--;
                    S+= "01";
                }else{
                    S+= "0";
                }
            }
        }else{
            while(b--){
                if (a != 0){
                    a--;
                    S+= "10";
                }else{
                    S+= "1";
                }
            }
        }
        cout<<S<<endl;
    }
}
