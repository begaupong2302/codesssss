#include <bits/stdc++.h>

using namespace std;

int main(){
    long long a,b;
    cin>>a>>b;
    long long A[a];
    long long B[a];
    for (long long i = 0; i<a; i++){
        cin>>A[i];
    }
    sort(A, A+a);
    B[a-1] = A[a-1];
    for (int i = a-2; i>= 0; i--){
        B[i] = B[i+1] + A[i];
    }
    while(b--){
        int x,y; cin>>x>>y;
        if (x == y){
            cout<< B[a-x]<<endl;
        }else{
            cout<<B[a-x] - B[a-x+y]<<endl;
        }
    }
}
