#include <stdio.h>
int main(){

	int n;

	printf("Enter the number - print triangle: ");
	scanf("%d",&n);

	for ( int row = 1; row <= n; row++){
		for (int col = 1; col <= row; col++){
			printf("* ");
		}
		printf("\n");

	}	

	printf("\n"); //new line for pattern separation

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <= n-row+1; col++) {
			printf("* ");
		}
		printf("\n");
	}

	for (int row = 1; row <= n; row++) {
		for (int col = 1; col <=row; col++) {
			printf("%d ",col);
		}
		printf("\n");
	}


return 0;
}
