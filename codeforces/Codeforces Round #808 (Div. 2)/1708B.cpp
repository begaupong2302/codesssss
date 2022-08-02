// // author: poong
// #include <bits/stdc++.h>
// #define ll long long
// #define fo(i,a,b) for(int i=a;i<b;i++)
// #define fd(i,a,b) for(int i=a;i>=b;i--)
// #define pi pair<int,int>
// #define fi first
// #define se second

// using namespace std;

// int main(){
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);
 
//     // freopen("input.txt","r",stdin);
//     // freopen("output.txt","w",stdout);
    
//     int t; cin>>t;
//     while(t--){
//     	ll n,l,r; cin>>n>>l>>r;
//     	ll A[n+1];
//     	map <ll, ll> M;

//     	for (ll i = 1; i<=n; i++){
    		
//     	}
//     	// if (n > r - l + 1){
//     	// 	cout<<"NO"<<endl;
//     	// }else{
//     	// 	for (ll i = n; i>=1; i--){
//     	// 		if (l%i == 0){
//     	// 			A[i] = l;
//     	// 			while(M[A[i]] != 0){
//     	// 				A[i]+= i;
//     	// 			}
//     	// 		}else{
//     	// 			A[i] = (l/i + 1)*i;
//     	// 			while(M[A[i]] != 0){
//     	// 				A[i]+= i;
//     	// 			}
//     	// 		}
//     	// 		M[A[i]]++;
//     	// 	}
//     	// 	for (ll i = 1; i<=n; i++){
//     	// 		cout<<A[i]<<" ";
//     	// 	}
//     	// 	cout<<endl;
//     	// }
//     }
// }

#include<bits/stdc++.h>
using namespace std;
 
typedef long long int lli;
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    lli n,t,l,r;
    cin>>t;
    while(t--)
    {
        cin>>n>>l>>r;
        lli k=1;
        lli ind=l;
        vector<lli> ans(n);
        bool flag=1;
        
        for(int i=1;i<=n;i++)
        {
            int temp=(l/i)*i;
            if(l%i)
                temp+=i;
            if(temp>r)
            {
                flag=0;
                break;
            }
            ans[i-1]=temp;
        }
        
        if(!flag)
            cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            for(auto i:ans)
                cout<<i<<" ";
            cout<<"\n";
        }
    }
}