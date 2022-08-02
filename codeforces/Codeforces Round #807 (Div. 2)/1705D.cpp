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
    	ll n; cin>>n;
    	string a,b; cin>>a>>b;
    	map<ll, ll> M;
    	map<ll, ll> N;
    	if (a[0] != b[0] || a[n-1] != b[n-1]){
    		cout<<"-1"<<endl;
    		continue;
    	}
    	for (int i = 1; i<n-1; i++){
    		if (a[i-1] != a[i+1]){
    			M[i]++;
    		}
    		if (b[i-1] != b[i+1]){
    			N[i]++;
    		}
    	}
    	int s = 0;
    	for (int i = 1; i<n-1; i++){
    		
    	}
    }
}