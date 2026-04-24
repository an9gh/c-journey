#include <stdio.h>


void print_result(char *label,int value){
	printf("%s: %d\n",label,value);
}

int add(int a,int b);

int multiply(int a,int b);

int square(int n);


int main(){

	print_result("Add", add(3, 5));	
	print_result("multiply", multiply(3, 5));
	print_result("square", square(5));

	return 0;
}


int add(int a,int b){
	return a + b;
}

int multiply(int a,int b){
	return a * b;
}

int square(int n){
	return n * n;
}
