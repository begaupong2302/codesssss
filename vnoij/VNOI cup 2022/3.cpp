#include <bits/stdc++.h>

using namespace std;

int main(){
    long long n; cin>>n;
    string A[n];
    unordered_map<int, int> M;
    for (long long i = 0; i<n; i++){
        cin>>A[i];
    }
    for (long long i = 0; i<n; i++){
        M[A[i].length()]++;
    }
    for (long long i = 0; i<n; i++){
        int z = 1;
        while(true){
            if (M[A[i].length()+z] == 0){
                cout<<z<<endl;
                break;
            }else{
                z++;
            }
        }
    }
}
