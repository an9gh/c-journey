#include <stdio.h>
int main(){
	int a=20; float b=3.14159265358979; double c=3.14159265358979; char d='A';
	
	printf("int value = %d | size: %lu\n",a,sizeof(a));
	printf("float value = %.15f | size: %lu\n",b,sizeof(b));
	printf("double value = %.15lf | size: %lu\n",c, sizeof(c));
	printf("char value = %c | size:  %lu\n",d,sizeof(d));


	return 0;
}


