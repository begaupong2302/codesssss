#include <bits/stdc++.h>
 
using namespace std;
 
typedef long long LL;

int main(){
	int t; cin>>t;
	while(t--){
		string w; cin>>w;
		LL k; cin>>k;
		LL M[27] = {0};
		LL N[27] = {0};
		LL sum = 0;
		for (LL i = 0; i<w.length(); i++){
			sum+= w[i] - 96;
			M[w[i]-96]++;
		}	
		for (int i = 26; i>=1; i--){
			if (sum <= k){
				break;
			}
			if (M[i] == 0){
				continue;
			}
			if (sum >= (k + i*M[i])){
				sum-= i*M[i];
				N[i] = M[i];
			}else{
				LL z;
				if ((sum-k)%i == 0){
					z = (sum - k)/i;
				}else{
					z = (sum - k)/i + 1;
				}
				sum-= z*M[i];
				N[i] = z;
				break;
			}
		}
		string v = "";
		for (int i = 0; i<w.length(); i++){
			if (N[w[i]-96] > 0){
				N[w[i]-96]--;
			}else{
				v+= w[i];
			}
		}
		cout<<v<<endl;
	}
}