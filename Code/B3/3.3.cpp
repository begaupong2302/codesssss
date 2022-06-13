#include <stdio.h>
int main(){
	float X,Y,A,B,C;
	printf("Nhap X:"),scanf("%f",&X);
	printf("Nhap Y:"),scanf("%f",&Y);
	A=X*X+Y*Y;
	B=(X+Y)*(X+Y);
	C=(X-Y)*(X-Y);
	printf("%f",A);
	printf("\n%f",B);
	printf("\n%f",C);
return 0;
}
