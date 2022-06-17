#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        long long A[a];
        int sum = 0;
        for (int i = 0; i<a; i++){
            cin>>A[i];
            sum+= A[i];
        }
        int x =0;
        bool y = false;
        while(true){
            if (sum == b) y = true;
            if (y){
                if (sum < b){
                    cout<<x<<endl;
                    break;
                }
            }
            if (sum < b){
                cout<<"-1"<<endl;
                break;
            }
            sum = sum - A[x] - A[a-x-1];
            x++;
        }
    }
}
