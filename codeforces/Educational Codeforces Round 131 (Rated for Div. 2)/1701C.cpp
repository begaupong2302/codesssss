#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int main(){
	int t; cin>>t;
	while(t--){
		LL n,m; cin>>n>>m;
		LL M[n+1] ={0};
		for (LL i = 0; i<m; i++){
			LL x;
			cin>>x;
			M[x]++;
		}
		LL l = 0;
		LL r = 3*m;
		while(l+1<r){
			LL mid = (l+r) >> 1;
			LL x = 0;
			LL y = 0;
			for (LL i = 1; i<=n; i++){
				if (M[i] >= mid){
					x+= (M[i] - mid);
				}else{
					y+= (mid - M[i])/2;
				}
			}
			// cout<<x<<" "<<y<<endl;
			if (x > y){
				l = mid;
			}else{
				r = mid;
			}
			// cout<<r<<" "<<l<<endl;
		}
		cout<<r<<endl;
	}
}