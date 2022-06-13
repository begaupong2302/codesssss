#include <stdio.h>
#include <math.h>
int main(){
    int n;
    int m = 1;
    float x;
    float S1 =1, S2=1, S3=1;
    scanf("%d%f", &n, &x);
    for (int i=1; i<=n; i++){
        S1 = S1 + pow(x,i);
    };
    for (int p=1; p<=n; p++){
        S2 = S2 + pow(x,p) * pow(-1,p);
    };
    for (int q=1; q<=n; q++){
        m = m * q;
        S3 = S3 + pow(x,q);
    };
    printf("%f", S1);
    printf("\n%f", S2);
    printf("\n%f", S3);
    return 0;
}
