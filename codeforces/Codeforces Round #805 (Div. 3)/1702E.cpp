// author: poong
#include <bits/stdc++.h>
#define LL long long
#define fo(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define pi pair<int,int>
#define fi first
#define se second

const LL Z = 2e5+5;
LL A[Z], B[Z];
LL M[Z], N[Z];

using namespace std;

void solve(){
    LL n; cin>>n;
    int s = 0;
    fill(M + 1, M + n + 5, 0);
    fill(N + 1, N + n + 5, 0);
    for (LL i = 0; i<n; i++){
        cin>>A[i]>>B[i];
    }
    for (LL i = 0; i<n; i++){
        if (M[A[i]] == 0 && M[B[i]] == 0){
            M[A[i]]++;
            M[B[i]]++;
        }else{
            N[A[i]]++;
            N[B[i]]++;
        }
        if (M[A[i]] > 1 || M[B[i]] > 1 || N[A[i]] > 1 || N[B[i]] > 1){
            cout<<"NO"<<endl;
            s = 1;
            break;
        }
    }
    if (s == 0) cout<<"YES"<<endl;
}

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    
    int t; cin>>t;
    while(t--){
        solve();
    }
}