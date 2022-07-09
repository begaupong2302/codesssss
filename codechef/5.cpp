#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int gcd(int a, int b){
    // Lặp tới khi 1 trong 2 số bằng 0
    while (a*b != 0){ 
        if (a > b){
            a %= b; // a = a % b
        }else{
            b %= a;
        }
    }
    return a + b; // return a + b, bởi vì lúc này hoặc a hoặc b đã bằng 0.
}

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		int A[n];
		map <int, int> M;
		int x = 0;
		for (int i = 0; i<n; i++){
			cin>>A[i];
			M[A[i]] = abs(A[i] - i - 1);
			if (M[A[i]] != 0){
				x = i+1;
			}
		}
		if (x == 0){
			cout<<0<<endl;
			continue;
		}
		int ans = M[A[x-1]];
		for (int i = 0; i<n; i++){
			if (i != x - 1){
				ans = gcd(ans, M[A[i]]);
			}
		}
		cout<<ans<<endl;
	}
}