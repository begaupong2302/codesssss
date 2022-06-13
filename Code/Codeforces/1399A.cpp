#include <stdio.h>

void turn(int n){
	int A[n];
	for (int i = 0; i<n; i++){
		scanf("%d",&A[i]);
	};
	for(int m = 0; m < n – 1; m++){
		for(int p = m + 1; p < n; p++){
			if(A[m] > A[p]) {
				A[m] = A[m] + A[p];
		        A[p] = A[m] - A[p];
		        A[m] = A[m] - A[p];
		    }
		}
	}
	for(int h = 0; h < n - 1; h++){
			if(A[h+1] - A[h] > 1){
				printf("NO");
				break;
			};
			if(h >= n - 2) printf("YES");
	}
}

int main(){
	int t; scanf("%d",&t);
	for(int z = 0; z < t; z++){
		
	}
}
