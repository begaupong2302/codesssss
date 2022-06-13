#include <stdio.h>
int main(){
	float x,y,z,tong;
	printf("Gia khong thue:"); scanf("%f",&x);
	printf("So kg:"); scanf("%f",&y);
	printf("Thue:"); scanf("%f",&z);
	tong=x*y*(100+z)/100;
	printf("%f",tong);
return 0;
}
