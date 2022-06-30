#include <bits/stdc++.h>

using namespace std;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int l = 1;
		int r = n;
		while(l < r){
			int mid = (r+l)/2;
			int count = 0;
			cout<<"? "<<l<<" "<<mid<<"\n";
			int x = mid - l + 1;
			while (x--){
				int a;
				cin>>a;
				if (a >= l && a <= mid){
					count++;
				}
			}
			if (count%2 == 0){
				l = mid + 1;
			}else{
				r = mid;
			}
		}
		cout<<"! "<<r<<"\n";
	}
}