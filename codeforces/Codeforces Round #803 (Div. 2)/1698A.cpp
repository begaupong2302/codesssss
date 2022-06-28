#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
        int A[n];
        int sum2 = 0;
        for(int i =0; i<n; i++){
            cin>>A[i];
            sum2+= A[i];
        }

        if ((A[0] | A[1]) == sum2 - A[0]){
            cout<< A[0]<<endl;
            continue;
        }
        for (int i =1; i<n; i++){
            if (A[i] | A[0] == sum2 - A[i]){
                cout<<A[i]<<endl;
                break;
            }
        }
    }
}
