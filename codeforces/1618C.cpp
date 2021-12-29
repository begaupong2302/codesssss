#include <iostream>

using namespace std;

int gcd(int a, int b){
    while (a*b != 0){ 
        if (a > b){
            a %= b;
        }else{
            b %= a;
        }
    }
    return a + b;
}

int main()
{
    int n; cin>> n;
    int A[100]; for(int i = 0; i<n; i++) cin>> A[i];
    int x = A[0];
    int y = A[1];
    for (int i = 0; i < n; i+=2){
        x = gcd(x,A[i]);
    }
    for (int i = 1; i < n; i+=2){
        y = gcd(y,A[i]);
    }
    if (x != 1){
        int d = 0;
        for (int i = 1; i < n; i+=2){
            if(A[i] % x == 0){
                d++;
                break;
            }
        }
        if (d == 0){
            cout<<x;
            return 0;
        }
    }
    if (y != 1){
        int d = 0;
        for (int i = 0; i < n; i+=2){
            if(A[i] % y == 0){
                d++;
                break;
            }
        }
        if (d == 0){
            cout<<y;
            return 0;
        }
    }
    cout<<"0";
    return 0;
}
