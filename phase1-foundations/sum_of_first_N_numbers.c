#include <stdio.h>

int main()
{
    
    int n;
    printf("Enter the number: ");//user to enter number
    scanf("%d",&n);// user input
    int sum = 0;
    for (int i = 1; i <= n; i++){
        sum = sum + i;//sum formula for 1 fisrt to N numbers
    }
    printf("sum of 1 to %d is: %d\n",n,sum);
   
    return 0;
}
