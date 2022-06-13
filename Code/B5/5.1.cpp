#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
    int a=n;
    int A[n];
    int x = 0, y = 0;
    int h = 0, k = 0;
    for(int i=0; i<a; i++){
		scanf("%d",&A[i]);
    };
    for(int s=0; s<a; s++){
        if (A[s]>0){
            x+= A[s];
            h++;
        };
        if (A[s]<0){
            y+= A[s];
            k++;
        };
    };
    float d = y/h;
    if(x=0){
        printf("%f Mang khong co so duong", d);
    }else if(y=0){
        printf("%d Mang khong co so am",x);
    }else{
        printf("%f %d", d, x);
    };
    return 0;
}
