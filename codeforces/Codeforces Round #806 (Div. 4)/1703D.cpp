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
    	int n; cin>>n;
    	string A[n];
    	map<string, int> M;
    	for (int i = 0; i<n; i++){
    		cin>>A[i];
    		M[A[i]]++;
    	}
    	for (int i = 0; i<n; i++){
    		int l = 0;
    		for (int j = 1; j<A[i].length(); j++){
    			if (M[A[i].substr(0,j)] > 0 && M[A[i].substr(j,A[i].length()-j)] > 0){
    				cout<<1;
    				l = 1;
    				break;
    			}
    		}
    		if (l == 0) cout<<0;
    	}
    	cout<<endl;
    }
}