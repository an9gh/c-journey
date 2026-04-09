#include <stdio.h>
int main(){
	int n = 9875;
	int sum = 0;
	printf("Number: %d\n",n);
	while (n != 0){
		int last = n % 10;
		sum += last;
		n = n / 10;
	}
	printf("Sum of digit: %d\n", sum);



	return 0;
}
