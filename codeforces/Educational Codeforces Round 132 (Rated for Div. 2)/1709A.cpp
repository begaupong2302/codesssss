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
    	int x;
    	int A[3];
    	cin>>x>>A[0]>>A[1]>>A[2];
    	if (A[x-1] == 0){
    		cout<<"NO"<<endl;
    	}else{
    		if (A[A[x-1]-1] == 0){
    			cout<<"NO"<<endl;
    		}else{
    			cout<<"YES"<<endl;
    		}
    	}
    }
}