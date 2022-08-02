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
    	int A[n];
    	for (int i = 0; i<n; i++){
    		cin>>A[i];
    	}
    	int count = 0;
    	map<int, int> M;
    	for (int i = n-1; i>=0; i--){
    		M[A[i]]++;
    		if (M[A[i]] > 1){
    			break;
    		}
    		count++;
    	}
    	cout<<n - count<<endl;
    }
}