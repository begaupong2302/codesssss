#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int n,q; cin>>n>>q;
	string s; cin>>s;
	while(q--){
		int a,b; cin>>a>>b;
		vector<char> S;
		int count = 0;
		int t = 0;
		for (int i = a-1; i<b; i++){
			if (s[i] == '('){
				t = 1;
			}
			S.push_back(s[i]);
			if (i > a-1){
				if (S[S.size()-2] == '(' && S[S.size()-1] == ')'){
					S.pop_back();
					S.pop_back();
					count+= t;
				}
			}
			if (s[i] == ')'){
				t = 0;
			}
		}
		cout<<count<<endl;
	}
}