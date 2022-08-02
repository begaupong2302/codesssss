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
 
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    int n; cin>>n;
    string A[n];
    map<string, int> M;
    for (int i = 0; i<n; i++){
    	cin>>A[i];
    	if (M[A[i]] > 0){
    		string X = A[i] + '(' + to_string(M[A[i]]) + ')';
    		M[X]++;
    		cout<<X<<endl;
    	}else{
    		cout<<A[i]<<endl;
    	}
    	M[A[i]]++;
    }
}