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
    	string s; cin>>s;
    	if (s == ""){
    		cout<<"YES"<<endl;
    		break;
    	}
    	s[0] = '(';
    	s[s.length()-1] = ')';
    	vector<ll> V1;
    	vector<ll> V2;
    	int z = 0;
    	V1.push_back(0);
    	for (ll i = 0; i<s.length(); i++){
    		if (s[i] == ')'){
    			z = 1;
    		}
    		if (z == 1 && s[i] == '('){
    			V1.push_back(i);
    			V2.push_back(i-1);
    			z = 0;
    		}
    	}
    	V2.push_back(s.length()-1);
    	ll x = 0;
    	for (ll i = 0; i<s.length(); i++){
    		if (s[i] == '?'){
    			
    		}
    	}
    }
}