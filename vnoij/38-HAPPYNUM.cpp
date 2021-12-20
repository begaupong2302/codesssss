#include <iostream>

using namespace std;

int tbfcs(int n, int x){
    if (n%10 < n){
        x+= (n%10) * (n%10);
        n = (n - n%10)/10;
        return tbfcs(n, x);
    }else{
        return n * n + x;
    }
}

int main()
{
    int n = 7;
    int x = 0;
    while(true){
        
    }
    cout<<r;
    return 0;
}
