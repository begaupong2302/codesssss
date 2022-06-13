#include <stdio.h>
int main()
{
    int a,b,x,y;
    int uscln, bscnn;
    scanf("%d%d", &a, &b);
    if (a<=0 || b<=0){
        printf("ERROR");
    }else{
        x=a;
        y=b;
        while(x != y){
            if (x > y){
                x = x-y;
            }else{
                y = y-x;
            };
        };
        uscln = x;
        bscnn = a*b/x;
        printf("%d", uscln);
        printf("\n%d", bscnn);
    };
    return 0;
}
