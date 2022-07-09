#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int t; cin>>t;
	while (t--){
		ll n,k; cin>>n>>k;
		ll A[n];
		ll ans = 0;
		unordered_map <ll, ll> M;
		for (ll i = 0; i<n; i++){
			cin>>A[i];
			ans+= A[i]/k;
			M[A[i]%k]++;
		}
		if (k == 1){
			cout<<ans<<endl;
			continue;
		}
		ll a;
		if (k%2 == 0){
			a = k/2;
		}else{
			a = k/2+1;
		}
		ll x = 0;
		for (ll i = 1; i<a; i++){
			if (i == a-1 && a == k/2+1){
				x+= M[a-1];
			}
			if (M[i] < M[k-i]){
				ans+= M[i];
				M[k-i-1]+= M[k-i] - M[i];
			}else{
				ans+= M[k-i];
			}
			M[k-i] = 0;
		}
		ans+= (M[k/2] - x)/2;
		cout<<ans<<endl;
	}
}