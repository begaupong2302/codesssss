#include <stdio.h>
main()
{
	float r,M,S;
	printf("Nhap r:");
	scanf("%f",&r);
	if (r<=0){
		printf("\nERROR");
	}
	else {
		M=3.14159*2*r;
		S=3.14159*r*r;
		printf("%f",M);
		printf("\n%f",S);
	}
return 0;
}
