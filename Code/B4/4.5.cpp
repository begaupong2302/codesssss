#include<stdio.h>
#include<math.h>
int main(){
	double a, b, c, d, X1, X2;
    scanf("%lf%lf%lf",&a,&b,&c);
    if(a==0) {
        if(b==0) {
            if(c==0) {
			   printf("Phuong trinh vo so nghiem");
            }else{
			   printf("Phuong trinh vo nghiem");
			};
        }else {
		    printf("%lf",-c/b);
		};
        return 0;
    }
    d = b*b - 4*a*c;
    if (d==0) {
	    printf("%lf",-b/(2*a));
	};
    if (d>0){
        X1 = (-b+sqrt(d))/(2*a);
        X2 = (-b-sqrt(d))/(2*a);
        printf("%lf\n%lf",X1,X2);
    };
    if (d<0){
        double x = -d;
        printf("%lf+%lfi\n",-b/(2*a),sqrt(x)/(2*a));
        printf("%lf-%lfi",-b/(2*a),sqrt(x)/(2*a));
    };
}
