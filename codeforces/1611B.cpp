#include <iostream>

using namespace std;

void ss(){
    int a,b; cin>>a>>b;
    int c = a + b;
    c = c/4;
    if (c > min(a,b)){
        cout<<min(a,b)<<endl;
    }else{
        cout<<c<<endl;
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin>>t;
    while(t--){
        ss();
    }
    return 0;
}
