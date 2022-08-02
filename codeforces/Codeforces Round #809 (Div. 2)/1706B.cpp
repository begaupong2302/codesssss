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
    	ll C[n+1];
    	for (ll i = 1; i<=n; i++){
    		cin>>C[i];
    	}
    	ll A[n+1] = {0};
    	ll X[n+1] = {0};
    	for (ll i = 1; i<=n; i++){
    		if (A[C[i]] == 0){
    			A[C[i]]++;
    			X[C[i]] = i;
    		}
    		if (X[C[i]]%2 != i%2){
    			A[C[i]]++;
    			X[C[i]] = i;
    		}
    	}
    	for (ll i = 1; i<=n; i++){
    		cout<<A[i]<<" ";
    	}
    	cout<<endl;
    }
}