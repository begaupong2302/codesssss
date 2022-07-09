#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;
typedef pair<int, int> PII;
 
const int N = 1e5 + 10, mod = 1e9 + 7;
 
int n, m;
int a[N];
 
void solve(){
	cin >> n;
    
    for(int i = 1; i <= n; ++ i){
		int x;
        cin >> x;
        a[x] = i;
    }
    
    LL ans = 1;
    
    int l, r;
    l = r = a[0];
       
    for(int i = 1; i < n; ++ i){
		if(a[i] < l) l = a[i];

		if(a[i] > r) r = a[i];

		if(a[i] > l && a[i] < r){
			ans = ((ans * (r - l + 1 - i) % mod)) % mod;
		}
        
    } 
    
    cout << ans << endl;
    
}
 
int main(){
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    // t = 1;
    while(t --){
        solve();
    }
    return 0;
}