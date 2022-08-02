#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int main(){
	int t; cin>>t;
	while(t--){
		LL n; cin>>n;
		int z = 0;
		while(true){
			if (n >= pow(10,z) && n<pow(10,z+1)){
				break;
			}
			z++;
		}
		LL x = n - pow(10,z);
		cout<<x<<endl;
	}
}