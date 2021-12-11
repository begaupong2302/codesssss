#include <iostream>

using namespace std;

int main()
{
    int n; cin>> n;
    int A[100001];
    for (int i = 1; i <= n; i++) cin>> A[i];
    A[0] = 1;
    int d = 0;
    int x = 1;
    int max = 0;
    for (int i = 0; i < n; i++){
        if (A[i] != A[i+1]){
            d++;
            if (d = 3){
                d = 0;
                if (max < i - x + 1) max = i - x + 1;
                x = i + 1;
            }
        }
    }
}
