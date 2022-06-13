#include <stdio.h>
int main(){
    unsigned int n;
    int a, b, c, tong;
    scanf("%d", &n);
    if (n>=1000){
        printf("ERROR");
    }
    a = n % 10;
    b = (n % 100 - a)/10;
    c = (n - 10*b - a)/100;
    tong = a+b+c;
    printf("%d", tong);
    return 0;
}
