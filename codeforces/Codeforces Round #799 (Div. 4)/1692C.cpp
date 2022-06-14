#include <bits/stdc++.h>

using namespace std;

int main(){
    long long t; cin>>t;
    while(t--){
        char A[8][8];
        for (int i = 0; i<8; i++){
            for (int j =0; j<8; j++){
                cin>>A[i][j];
            }
        }
        int count[8] = {0};
        for (int i = 0; i<8; i++){
            for (int j =0; j<8; j++){
                if (A[i][j] == '#') count[i]++;
            }
        }
        int a,b;
        for (int i = 1; i<8; i++){
            if (count[i] == 1 && count[i-1] == 2){
                a = i;
                break;
            }
        }
        for (int i = 0; i<8; i++){
            if (A[a][i] == '#') b = i;
        }
        cout<<a+1<<" "<<b+1<<endl;
    }
}
