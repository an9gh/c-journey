#include <stdio.h>

void print_result(char *label,int value){
	printf("%s: %d\n",label,value);
}

int add(int a,int b);


int main(){

	print_result("Add", add(3, 5));

	return 0;
}


int add(int a,int b){
	return a + b;
}


