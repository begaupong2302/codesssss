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
    	if (n<10){
    		cout<<n<<endl;
    	}
    	if (n>=10 && n<=17){
    		cout<<(n-9)*10+9<<endl;
    	}
    	if (n>17 && n<=24){
    		cout<<n-9-8<<8<<9<<endl;
    	}
    	if (n>24 && n<=30){
    		cout<<n-9-8-7<<"789"<<endl;
    	}
    	if (n>30 && n<=35){
    		cout<<n-9-8-7-6<<"6789"<<endl;
    	}
    	if (n>35 && n<=39){
    		cout<<n-35<<"56789"<<endl;
    	}
    	if (n>39 && n<=42){
    		cout<<n-39<<"456789"<<endl;
    	}
    	if (n>42 && n<=44){
    		cout<<n-42<<"3456789"<<endl;
    	}
    	if (n==45){
    		cout<<"123456789"<<endl;
    	}
    }
}