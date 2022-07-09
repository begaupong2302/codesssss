#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int main(){
	int t; cin>>t;
	while(t--){
		int n; cin>>n;
		string s; cin>>s;
		if (n == 1){
			cout<<0<<endl;
			continue;
		}
		int count = 0;
		for (int i = 0; i<n-1; i++){
			if (s[i] == '1' && s[i+1] == '0'){
				count++;
			}
		}
		cout<<count<<endl;
	}
}