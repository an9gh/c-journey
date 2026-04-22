#include <stdio.h>
int main() {

	int n = 5; int row;
	for(row = 1; row <= n; row++) {
		for (int spc= 1; spc <= n-row; spc++) {
			printf(" ");
		}
		for(int col = 1; col <= row; col++) {
			printf("* ");
		}
		printf("\n");
	}

		for(row = 1; row <= n; row++) {
		for (int spc= 1; spc <= row; spc++) {
			printf(" ");
		}
		for(int col = 1; col <= n - row; col++) {
			printf("* ");
		}
		printf("\n");
	}









	return 0;
}
