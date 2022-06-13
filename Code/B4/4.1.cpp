#include <stdio.h>
int main(){
	int n,i,T = 1;
	printf("Nhap n:");
	scanf("%d",&n);
	if(n<0 || n>=8){
	    printf("ERROR");
	}else{
	    for (i=1; i<=n; i++)
		{
		  T = T * i;
		};
		printf("%d",T);
		};	
	return 0;
}

