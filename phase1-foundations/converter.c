#include <stdio.h>
int main(){
	// F = (C × 9/5) + 32
	float celsius=46, fahrenheit;
	fahrenheit= (celsius*9/5)+32;
	printf("conveting %.1f\u00B0C celsius ->  %.2f\u00B0F\n fahrenheit",celsius,fahrenheit);
	return 0;
}
