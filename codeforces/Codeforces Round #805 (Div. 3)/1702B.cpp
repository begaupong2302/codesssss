#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int main(){
	int t; cin>>t;
	while(t--){
		string s;
		cin>>s;
		char a = '.';
		char b = '.';
		char c = '.';
		int count = 0;
		LL ans = 0;
		for (LL i = 0; i<s.length(); i++){
			int r = 0;
			if (count == 3 && a != s[i] && b != s[i] && c != s[i]){
				ans++;
				a = '.';
				b = '.';
				c = '.';
				count = 0;
			}
			if (a != s[i] && b != s[i] && c != s[i] && count == 0){
				a = s[i];
				count++;
				r = 1;
			}
			if (a != s[i] && b != s[i] && c != s[i] && count == 1 && r == 0){
				b = s[i];
				count++;
				r = 1;
			}
			if (a != s[i] && b != s[i] && c != s[i] && count == 2 && r == 0){
				c = s[i];
				count++;
			}
			if (i == s.length() - 1 && count != 0){
				ans++;
			}
			// cout<<ans<<" ";
			// cout<<a<<" "<<b<<" "<<c<<endl;
			// cout<<a<<" "<<b<<" "<<c<<endl;
		}
		cout<<ans<<endl;
	}
}