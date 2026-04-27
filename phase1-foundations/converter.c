#include <stdio.h>
int main(){
	/*purpose: unit converter*/
	printf("=== Unit Converter ===\n");
	// F = (C × 9/5) + 32(celsius to fehrenheit)
	float celsius=46, fahrenheit,miles,pounds,kilogram=70,kilometer=10;
	fahrenheit= (celsius*9/5)+32;
	printf("%.2f\u00B0C -> %.2f\u00B0F\n ",celsius,fahrenheit);
	
	//miles = km × 0.621371(kilometer to miles)
	miles = (kilometer * 0.621371);
	printf("%.2f km -> %.2f miles \n",kilometer,miles);

	//pounds = kg × 2.204629(kilograms to pounds)
	pounds = (kilogram * 2.20462);
	printf("%.2f kg -> %.2f pounds\n",kilogram,pounds);


	return 0;
}
