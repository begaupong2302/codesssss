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
    	int n,H,M; cin>>n>>H>>M;
    	int z = H*60+M;
    	int A[n],B[n],C[n];
    	int minx = 100000;
    	for (int i = 0; i<n; i++){
    		cin>>A[i]>>B[i];
    		C[i] = A[i]*60 + B[i];
    		if (C[i] < z){
    			minx = min(minx, C[i] - z + 1440);
    		}else{
    			minx = min(minx, C[i] - z);
    		}
    	}
    	int ansh = minx/60;
    	int ansm = minx - ansh*60;
    	cout<<ansh<<" "<<ansm<<endl;
    }
}