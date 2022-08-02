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
    	ll n,q; cin>>n>>q;
    	ll A[i];
    	ll count = 0;
    	map <ll, ll> M;
    	for (ll i = 0; i<n; i++){
    		cin>>A[i];
    		if (A[i] > q){
    			count++;
    		}
    		if (A[i] <= q){
    			M[A[i]]++;
    		}
    	}
    	ll countz = count;
    	ll qz = q;
    	int s = 0;
    	ll z = 0;
    	while(countz>0 && qz > 0){
    		if (M[qz] > 0 && s == 1){
    			
    		}
    		if (M[qz] > 0){
    			s = 1;
    			z = qz;
    		}
    		countz--;
    		qz--;
    	}
    }
}