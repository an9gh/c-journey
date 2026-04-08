#include <stdio.h>
int main(){
	int secret=42;
	int numbers[4] = {10,55,42,30};
	printf("=== Number Guessing Game ===\n");
	for (int i = 0; i < 4; i++){
		if (numbers[i] == secret){
			printf("Guess: %d -> Correct! You got it!\n",numbers[i]);
			break;
		}
		else if (numbers[i] < secret){
			printf("Guess: %d -> Too low!\n",numbers[i]);
		}
		else{
			printf("Guess: %d -> Too high!\n",numbers[i]);
		}	
	}








	return 0;
}
