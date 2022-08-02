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
 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int t; cin>>t;
    while(t--){
    	ll n,m; cin>>n>>m;
    	ll A[n];
    	ll B[m];
    	ll C[m];
    	map<ll, ll> M;
    	for (ll i = 0; i<n; i++){
    		cin>>A[i];
    	}
    	for (ll i = 0; i<m; i++){
    		cin>>B[i]>>C[i];
    		M[B[i]]++;
    		M[C[i]]++;
    	}
    	if (m%2 == 0){
    		cout<<0<<endl;
    	}else{
    		
    		
    		ll minx = 2*pow(10,4);
    		
    		
    		ll minz = 2*pow(10,4);
    		for (auto& x: M){
    			if (x.second%2 == 1){
    				minz = min(minz, A[x.first-1]);
    			}
    		}
    		for (ll i = 0; i<m; i++){
    			if (M[B[i]]%2 == 0 && M[C[i]]%2 == 0){
    				minx = min(minx, A[B[i]-1]+A[C[i]-1]);
    			}
    		}
    		cout<<min(minx, minz)<<endl;
    	}
    }
}