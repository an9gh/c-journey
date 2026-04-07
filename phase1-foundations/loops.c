#include <stdio.h>
int main(){

	//for-loop exersise
	int num=9;
	printf("== Multiplication Table of %d ==\n",num);
	
	for (int i = 1; i <=10; i++){
		printf("%d x %d = %d\n",num,i,num*i);
	}
	
	//while-loop
	printf("=== Even Numbers (1-20) ===\n");	
	int i = 1;
	
	while (i <=20){
		i++;
		if (i % 2 != 0) {
			continue;
		}
		printf("%d ",i);
	
	}
	printf("\n");


	//do-while
	printf("=== Countdown ===\n");
	int x = 5;
  
  	do {
      	printf("%d ",x);
      	x--;
  	} while(x >= 1);
  	printf("\nBlast off!");

	return 0;
}
