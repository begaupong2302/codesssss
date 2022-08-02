// author: poong
#include <bits/stdc++.h>
#define ll long long
#define fo(i,a,b) for(int i=a;i<b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
#define pi pair<int,int>
#define fi first
#define se second

using namespace std;

const ll N = 1e9;

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
    	vector<ll> X;
    	vector<ll> Y;
    	for (ll i = 0; i<n; i++){
    		cin>>A[i];
    		if (A[i]<i+1){
    			X.push_back(A[i]);
    			Y.push_back(i+1);
    		}
    	}
        if (X.size() == 0){
            cout<<0<<endl;
            continue;
        }
    	ll countx = 0;
        ll county = 0;
        map <ll, ll> M;
        ll x = 0;
    	for (ll i = 1; i<=n; i++){
    		M[i] = countx;
            if (i == Y[x]){
                countx++;
                x++;
            }
    	}
        for (ll i = 0; i<X.size(); i++){
            county+= M[X[i]];
        }
        cout<<county<<endl;
    }
}