#include<stdio.h>
#include<math.h>
int main(){
    int n;
    float x;
    scanf("%f %d",&x,&n);
    if(n<1 || x<0){
        printf("Error");
    }
    else{
        float S1 = 0;
        for(int i=1;i<=n;i++){
            float s = S1 + x;
            S1 = sqrt(s);
        }
        printf("%.4f ",S1);

        //cau b
        float S2 = 0;
        for(int i = 0;i<=n;i++){
            if (i==0){
                float s = pow(x,i);
                S2 += s/(i+1);
            }
            else {
                float s = pow(x,i);
                S2 += s/i;
            }
        }
        printf("%.4f ",S2);

        //cau c
        float S3 = 0;
        float s3 = 1;
        for (int i = 0; i<=n;i++){
            if(i==0){
                float s = pow(x,i);
                s3 = 1;
                S3 += s/s3;
            }
            else{
                float s =pow(x,i);
                s3 = i;
                S3 += s/s3;
            }
        }
        printf("%.4f ",S3);

        //cau d
        float S4 = 0;
        float s4 = 1;
        for (int i =0; i<=n;i++){
            if(i==0){
                float s = (pow(-1,i))(pow(x,i));
                s4 =1;
                S4 += s/s4;
            }
            else{
                float s = (pow(-1,i))*(pow(x,i));
                s4 *=i;
                S4 += s/s4;
            }
        }
        printf("%.4f",S4);
    }
    return 0;
}
