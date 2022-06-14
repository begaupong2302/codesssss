#include <bits/stdc++.h>

using namespace std;

int main(){
    int t; cin>>t;
    while (t--){
        int n; cin>>n;
        string S;
        string T;
        cin>>S>>T;
        for (int i = 0; i< n; i++){
            int s = 0;
            if (i == n-1 && S[i] == T[i]){
                cout<<"YES"<<endl;
                break;
            }
            if (i == n-1 && S[i] != T[i]){
                cout<<"NO"<<endl;
                break;
            }
            if (S[i] != T[i]){
                if(T[i] == 'a'){
                    cout<<"NO"<<endl;
                    break;
                }else if(T[i] == 'b'){
                    int x = i;
                    while(true){
                        if (S[x] == T[i]){
                            swap(S[i], S[x]);
                            break;
                        }else{
                            if (S[x] != 'a'){
                                cout<<"NO"<<endl;
                                s = 1;
                                break;
                            }
                        }
                        x++;
                    }
                    if (s == 1) break;
                }else{
                    int x = i;
                    while(true){
                        if (S[x] == T[i]){
                            swap(S[i], S[x]);
                            break;
                        }else{
                            if (S[x] != 'b'){
                                cout<<"NO"<<endl;
                                s = 1;
                                break;
                            }
                        }
                        x++;
                    }
                    if (s == 1) break;
                }
            }
        }
    }
}
