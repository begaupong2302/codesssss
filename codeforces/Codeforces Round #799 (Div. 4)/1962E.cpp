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
        int x;
        if (a%2 == 0){
            x = a/2;
            for (int i = 0; i<=x; i++){
                if (sum == b){
                    cout<<i<<endl;
                    break;
                }
                if (i == x){
                    if (sum != b){
                        cout<<"-1"<<endl;
                    }
                }
                sum = sum - A[i] - A[a-1-i];
            }
        }else{
            x = (a-1)/2;
            for (int i = 0; i<=x; i++){
                if (sum == b){
                    cout<<i<<endl;
                    break;
                }
                if (i == x){
                    if (sum != b){
                        cout<<"-1"<<endl;
                    }
                }
                sum = sum - A[i] - A[a-1-i];
            }
        }

    }
}
