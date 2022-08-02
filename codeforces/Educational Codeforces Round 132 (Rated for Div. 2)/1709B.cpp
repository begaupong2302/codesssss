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
    
    int n, m; cin>>n>>m;
    ll A[n];
    ll B[n];
    B[0] = 0;
    ll C[n];
    C[n-1] = 0;
    for (ll i = 0; i<n; i++){
    	cin>>A[i];
    }
    for (ll i = 1; i<n; i++){
    	if (A[i] < A[i-1]){
    		B[i] = A[i-1] - A[i] + B[i-1];
    	}else{
    		B[i] = B[i-1];
    	}
    }
    for (ll i = n-2; i>=0; i--){
    	if (A[i] < A[i+1]){
    		C[i] = A[i+1] - A[i] + C[i+1];
    	}else{
    		C[i] = C[i+1];
    	}
    }
    while(m--){
    	ll x,y;
    	cin>>x>>y;
    	if (x>y){
    		cout<<C[y-1]-C[x-1]<<endl;
    	}
    	if (x<y){
    		cout<<B[y-1]-B[x-1]<<endl;
    	}
    }
}