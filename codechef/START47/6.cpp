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
    
    ll t; cin>>t;
    while(t--){
    	ll n; cin>>n;
    	map<ll, ll> M;
    	ll A[n];
    	for (ll i = 0; i<n; i++){
    		cin>>A[i];
    		M[A[i]]++;
    	}
    	ll count = 0;
    	ll maxm = 0;
    	ll minc = 1e9;
    	ll z = 0;
    	for (auto& x: M){
    		if (x.second == 1){
    			count++;
    			z = x.first;
    		}
    		if (x.second > 1){
    			maxm = max(x.first, maxm);
    			minc = min(x.second, minc);
    		}
    	}
    	if (count == 1){
    		if (maxm > z){
    			cout<<"1"<<endl;
    		}else{
    			cout<<minc<<endl;
    		}
    		continue;
    	}
    	if (count%2 == 0){
    		cout<<count/2<<endl;
    	}else{
    		cout<<(count+1)/2<<endl;
    	}

    }
}