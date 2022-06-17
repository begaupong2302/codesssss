#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        int s = 1;
        long long n; cin>>n;
        long long A[n];
        for (long long i = 0; i<n; i++){
            cin>>A[i];
        }
        if (n == 1 && A[0] == 0){
            cout<<"Yes"<<endl;
            continue;
        }
        if (n == 1 && A[0] != 0){
            cout<<"No"<<endl;
            continue;
        }
        long long sum1 = 0;
        long long sum2 = 0;
        long long sum3 = 0;
        int i = n;
        while (i--){
            if (i == 0){
                if ((sum3 + A[0]) == 0){
                    cout<<"Yes"<<endl;
                }else{
                    cout<<"No"<<endl;
                }
            }
            if (s == 1 && A[i] < 0){
                s = 0;
                sum2 = A[i];
            }
            if (s == 0){
                if (A[i] < 0){
                    if ((sum1 + sum2) != -1){
                        cout<<"No"<<endl;
                        break;
                    }
                    sum3=sum3 + sum1 + sum2;
                    sum2 = A[i];
                    sum1 = 0;
                }
                if (A[i] >= 0){
                    sum1+= A[i];
                }
            }
            if (i == 1){
                if ((sum1 + sum2) != -1){
                        cout<<"No"<<endl;
                        break;
                }
                sum3=sum3 + sum1 + sum2;
            }
        }
    }
}
