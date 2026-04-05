#include <stdio.h>
int main(){

	float num1=25,num2=0;
	char op= '/';
	printf("=== Simple Calculator ===\n");
	switch(op){
		case '+':
			printf("%.2f + %.2f = %.2f\n ",num1,num2,num1+num2);
			break;
		
		case '-':
                        printf("%.2f - %.2f = %.2f\n ",num1,num2,num1-num2);
                        break;
		
		case '*':
                        printf("%.2f * %.2f = %.2f\n ",num1,num2,num1*num2);
                        break;
		
		case '/':
			if (num2 == 0){
				printf("Error: Division by zero is not allowed!\n");
			}
			else{
				 printf("%.2f / %.2f = %.2f\n ",num1,num2,num1/num2);
			}
                        break;	
		default:
			printf("Input is not a VALID!\n");

		}







}
