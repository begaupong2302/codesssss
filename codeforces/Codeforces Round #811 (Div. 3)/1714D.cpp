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
    	ll n; cin>>n;
    	ll A[n];
    	ll B[n];
    	ll C[n];
    	for (ll i = 0; i<n; i++){
    		cin>>A[i];
    		if (A[i]%10 == 0){
    			B[i] = 0;
    			C[i] = A[i]/10;
    		}
    		if (A[i]%10 == 1){
    			B[i] = 6;
    			C[i] = (A[i]/10 + 1)%2;
    		}
    		if (A[i]%10 == 2){
    			B[i] = 6;
    			C[i] = (A[i]/10 + 1)%2;
    		}
    		if (A[i]%10 == 3){
    			B[i] = 6;
    			C[i] = (A[i]/10)%2;
    		}
    		if (A[i]%10 == 4){
    			B[i] = 6;
    			C[i] = (A[i]/10 + 1)%2;
    		}
    		if (A[i]%10 == 5){
    			B[i] = 0;
    			C[i] = (A[i] + 5)/10;
    		}
    		if (A[i]%10 == 6){
    			B[i] = 6;
    			C[i] = (A[i]/10)%2;
    		}
    		if (A[i]%10 == 7){
    			B[i] = 6;
    			C[i] = (A[i]/10)%2;
    		}
    		if (A[i]%10 == 8){
    			B[i] = 6;
    			C[i] = (A[i]/10 + 1)%2;
    		}
    		if (A[i]%10 == 9){
    			B[i] = 6;
    			C[i] = (A[i]/10)%2;
    		}
    	}
    	int z = 0;
    	for (ll i = 1; i<n; i++){
    		if (B[i] != B[0] || C[i] != C[0]){
    			z = 1;
    			break;
    		}
    	}
    	if (z == 0){
    		cout<<"YES"<<endl;
    	}
    	if (z == 1){
    		cout<<"NO"<<endl;
    	}
    }
}