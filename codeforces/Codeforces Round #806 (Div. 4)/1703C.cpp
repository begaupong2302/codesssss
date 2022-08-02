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
    	for (int i = 0; i<n; i++){
    		int x; cin>>x;
    		string s; cin>>s;
    		for (int j = 0; j<x; j++){
    			if (s[j] == 'D'){
    				A[i]++;
    			}else{
    				A[i]--;
    			}
    		}
    		cout<<(A[i]+20)%10<<" ";
    	}
    	cout<<endl;
    }
}