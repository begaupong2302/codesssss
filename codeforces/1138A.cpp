#include <iostream>

using namespace std;

int main()
{
    int n; cin>> n;
    int A[100003];
    for (int i = 1; i <= n; i++) cin>> A[i];
    A[0] = 1;
    A[n+1] = 1;
    A[n+2] = 2;
    int d = 0;
    int x = 1;
    int r;
    int Max = 0;
    for (int i = 0; i <= n+1; i++){
        if (A[i] != A[i+1]){
            d++;
            if (d = 3){
                d = 0;
                if (i == n+1){
                    r = i - x;
                    Max = max(x, r);
                }else{
                    r = i - x + 1
                    Max = max(x, r);
                }
                
                x = i + 1;
            }
        }
    }
    cout<< Max;
    return 0;
}
