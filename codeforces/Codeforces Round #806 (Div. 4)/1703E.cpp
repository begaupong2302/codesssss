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
        string S[n];
    	int X[n][n];
    	for (int i = 0; i<n; i++){
    		cin>>S[i];
    	}
        for (int i = 0; i<n; i++){
            for (int j = 0; j<n; j++){
                if (S[i][j] == '1'){
                    X[i][j] = 1;
                }else{
                    X[i][j] = 0;
                }
            }
        }
    	int x = 0;
    	int count = 0;
    	while(n>0){
            int a = 0;
            int b = 0;                                
            for (int i = 0; i<n-1; i++){
                a = X[x][x+i] + X[x+i][n-1+x] + X[n-1+x][n-1-i+x] + X[n-1-i+x][x];
                b = 4 - X[x][x+i] - X[x+i][n-1+x] - X[n-1+x][n-1-i+x] - X[n-1-i+x][x]; 
                count+= min(a,b);                 
            }  
            n-=2;
            x++;
        }
        cout<<count<<endl;
    }
}