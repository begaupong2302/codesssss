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
    	int x; cin>>x;
    	int A[2*n];
    	for (int i = 0; i<2*n; i++){
    		cin>>A[i];
    	}
    	sort(A, A+2*n);
    	int s = 0;
    	for (int i = 0; i<n; i++){
    		if ((A[i+n] - A[i]) < x){
    			cout<<"NO"<<endl;
    			s = 1;
    			break;
    		}
    	}
    	if (s == 0) cout<<"YES"<<endl;
    }
}