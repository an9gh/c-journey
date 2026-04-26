#include <stdio.h>


int is_even(int n);

void analyzer(int n);

int main(){


	analyzer(6);
	analyzer(3);
	analyzer(15);




	return 0;
}
int is_even(int n){
	if (n % 2 == 0){
		return 1;
	}
	return 0;
}
void analyzer(int n) {
    printf("Even: %s\n", is_even(n) ? "Yes" : "No");
}
