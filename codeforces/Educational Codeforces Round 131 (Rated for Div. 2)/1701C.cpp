#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int main(){
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		map <int, int> M;
		for (int i = 0; i<m; i++){
			int x;
			cin>>x;
			M[x]++;
		}
		int l = 0;
		int r = m;
		while(l<r){
			int mid = (l+r) >> 1;
			int x = 0;
			int y = 0;
			for (int i = 1; i<=n; i++){
				if (M[i] >= mid){
					x+= (M[i] - mid);
				}else{
					y+= (mid - M[i])/2;
				}
			}
			if (x <= y){
				r = mid;
			}else{
				
				l = mid+1;
			}
		}

		cout<<r<<endl;
		
	}
}