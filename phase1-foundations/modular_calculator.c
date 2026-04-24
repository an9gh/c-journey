#include <stdio.h>


float add(float a, float b);
float substract(float a, float b);
float multiply(float a, float b);
float divide(float a, float b);

void print_result(char *operation,float result){
	printf("%s: %.2f\n",operation,result);
}

int main(){

	print_result("Add",add(10,3));
	print_result("substract",substract(10,3));
	print_result("multiply",multiply(10,3));
	print_result("divide",divide(10,0));





	return 0;
}

float add(float a, float b){
	return a + b;
}

float substract(float a, float b){
	return a - b;
}

float multiply(float a, float b){
	return a * b;
}

float divide(float a, float b){
	if (b == 0){
		printf("Error: Division by Zero!\n");
		return 0;
	}
	return a / b;
}
