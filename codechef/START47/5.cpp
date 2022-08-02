// author: poong
#include <bits/stdc++.h>
#define ll long long
#define fo(i,a,b) for(ll i=a;i<b;i++)
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
    	ll x,y;
    	for(ll i = 0; i<n; i++){
    		int z;
    		cin>>z;
    		if (z == 1){
    			x = i+1;
    		}
    		if (z == n){
    			y = i+1;
    		}
    	}
    	if (x < y){
    		cout<<x-1 + n-y<<endl;
    	}
    	if (x > y){
    		cout<<x-2 + n-y<<endl;
    	}
    }
}