#include <stdio.h>
int main(){

	int n = 12345;
	int reverse = 0;
	
	printf("original: %d\n",n);

	while(n != 0){
		int last_num = n % 10;
		reverse =+ reverse * 10 + last_num;
		n =+ n / 10;
	}

	printf("reversed: %d\n",reverse);






	return 0;
}
