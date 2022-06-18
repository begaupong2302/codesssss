#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin>>n;
    long long A[n];
    long long B[n];
    if (n == 1){

    }
    for (int i = 0; i<n ;i++){
        cin>>A[i];
    }
    for (int i = 0; i<n; i++){
        cin>>B[i];
    }
    string s;
    if (A[n-1] == B[0]){
        for (int i =0; i<n-1; i++){
            s+= 'a';
        }
        s=s + "bba";
        for (int i =0; i<n-2; i++){
            s+= 'b';
        }
    }else{
        for (int i = 0; i<n; i++){
            s+= 'a';
        }
        for (int i = 0; i<n; i++){
            s+= 'b';
        }
    }
    cout<<s;
}
