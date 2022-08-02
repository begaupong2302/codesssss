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
    	int n,m; cin>>n>>m;
    	int A[n];
    	char B[m];
    	for (int i = 0; i<m; i++){
    		B[i] = 'B';
    	}
    	for (int i = 0; i<n; i++){
    		cin>>A[i];
    		if (A[i]*2 < m+1){
                if (B[A[i]-1] == 'B'){
    			     B[A[i]-1] = 'A';
    		    }else{
    			     B[m - A[i]] = 'A';
    		    }
    		}else{
    			if (B[m - A[i]] == 'B'){
    				B[m - A[i]] = 'A';
    		    }else{
    			    B[A[i]-1] = 'A'; 
    		    }
    		}
    		
    	}
    	for (int i = 0; i<m; i++){
    		cout<<B[i];
    	}
    	cout<<endl;
    }
}