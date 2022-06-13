#include <stdio.h>

int ucln(int a, int b) {
	while (a != b){
		if (a > b){
			a = a - b;
		}else{
			b = b - a;
		}
	}
	return a;
}

int main(){
	int n;
	int A[]; for (int i = 0; i < n; i++) scanf("%d",&A[i]);
	int x,y;
	int z = 0;
	int power;
	for (int i = 0; i < n; i++){
		for (int j = 0; j + 1 < n; j++){
			if(j != i && j+1 != i){
				x = ucln(A[j], A[j+1])
				A[j+1] = x;
			}
		}
		if (A[i]%x != 0){
			y = x;
			z++;
		}
	}
	if(z == 0){
		power = A[0];
	}if else(z = 1){
		power = y;
	}else{
		power = 1;
	}
	printf("%d",power);
	return 0;
}
