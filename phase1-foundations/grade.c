#include <stdio.h>
int main(){
	int grade=92;

	if (grade <= 100 && grade >=90){
		printf("Marks: %d\nGrade: A\nExcellent!\n",grade);

	}

	else if (grade <= 89 && grade >=80){
                printf("Marks: %d\nGrade: B\nKeep it up!\n",grade);

        }

	else if (grade <= 79 && grade >=70){
                printf("Marks: %d\nGrade: C\nKeep it up!\n",grade);

        }

	else if (grade <= 69 && grade >=60){
                printf("Marks: %d\nGrade: D\nKeep it up!\n",grade);

        }
	else {
                printf("Marks: %d\nGrade: F\nNeed improvment!\n",grade);

        }






	return 0;

}	
