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
    
    int n; cin>>n;
    char A[n][n];
    for (int i = 0; i<n; i++){
    	for (int j = 0; j<n; j++){
    		cin>>A[i][j];
    	}
    }
    int s = 0;
    for (int i = 0; i<n; i++){
    	for (int j = 0; j<n; j++){
    		if (A[i][j] == '-'){
    			if (i != j){
    				s = 1;
    			}
    		}else if(A[i][j] == 'D'){
    			if (A[i][j] != A[j][i]){
    				s = 1;
    			}
    		}else{
    			if (A[i][j] == A[j][i]){
    				s = 1;
    			}
    		}
    	}
    }
    if (s == 1){
    	cout<<"incorrect";
    }else{
    	cout<<"correct";
    }
}