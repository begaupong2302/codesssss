// author: poong
#include <bits/stdc++.h>
#define ll long long
#define fo(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define pi pair<int,int>
#define fi first
#define se second

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    
    int t; cin>>t;
    while(t--){
        ll n; cin>>n;
        ll A[n];
        for (ll i = 0; i<n; i++){
            cin>>A[i];
        }
        if (n%2 == 1){
            ll count = 0;
            for (ll i = 1; i<n-1; i+=2){
                count+= max(max(A[i-1],A[i+1])-A[i]+1,0ll);
            }
            cout<<count<<endl;
        }else{
            ll count1[n] = {0};
            ll count2[n] = {0};
            for (ll i = 1; i<n-1; i+=2){
                if (i == 1){
                    count1[i] = max(max(A[i-1],A[i+1])-A[i]+1,0ll);
                }else{
                    count1[i] = max(max(A[i-1],A[i+1])-A[i]+1,0ll) + count1[i-2];
                }
                
            }
            for (ll i = n-2; i>=2; i-=2){
                if (i == n-2){
                    count2[i]= max(max(A[i-1],A[i+1])-A[i]+1,0ll);
                }else{
                    count2[i]= max(max(A[i-1],A[i+1])-A[i]+1,0ll) + count2[i+2];
                }
            }
        

            ll ans = count2[2];
            for (ll i = 2; i<n; i+=2){
                if(i == n-2){
                    ans = min(ans, count1[n-3]);
                }else{
                    ans = min(ans, count1[i-1] + count2[i+2]);
                }
            }
            cout<<ans<<endl;
        }
    }
}