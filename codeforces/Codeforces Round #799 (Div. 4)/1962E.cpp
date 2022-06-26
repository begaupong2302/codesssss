#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while(t--){
        long long n,s;
        cin>>n>>s;
        long long A[n];
        long long sum = 0;
        for (long long i = 0; i<n; i++){
            cin>>A[i];
            sum+= A[i];
        }
        vector<long long> V;
        if (sum < s){
            cout<<-1<<endl;
            continue;
        }
        if (sum == s){
            cout<<0<<endl;
            continue;
        }
        long long sum2 = 0;
        long long count = 0;
        for (long long i = 0; i<n; i++){
            sum2+= A[i];
            if (i == n-1){
                if (sum2 == s){
                    count++;
                    V.push_back(count);
                    break;
                }
            }
            if (sum2 > s){
                V.push_back(count);
                sum2-= 1;
            }else{
                count++;
            }
        }
        long long max1 = INT_MIN;
        for (long long i = 0; i< V.size(); i++){
            cout<<V[i]<<" ";
            max1 = max(max1, V[i]);
        }
        cout<<endl;
        cout<<n-max1<<endl;
    }
}
