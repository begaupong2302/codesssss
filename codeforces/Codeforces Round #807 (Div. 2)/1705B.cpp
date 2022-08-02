// author: poong
#include <bits/stdc++.h>
#include <list>
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
    	ll count = 0;
    	int s = 0;
    	for (ll i = 0; i<n; i++){
    		cin>>A[i];
    		if (i == n-1){
    			break;
    		}
    		if (A[i] > 0){
    			s = 1;
    			count+= A[i];
    		}
    		if (s == 1 && A[i] == 0){
    			count++;
    		}
    	}
    	
    	cout<<count<<endl;
    }
}