#include <stdio.h>
#include <stdlib.h>

// declaring a function
int factor(int number);

int main()
{
	// declaring variables
    int number;
    
	printf("\n ---------- Get Factorial ----------\n"); 
    printf("\nEnter a number: "); 
    scanf("%d", &number);

    printf("\nFactorial of %d = %d", number, factor(number));

	return 0;
}

// initializing the user defined function
int factor(int number) {
    if(number == 0) {
        return 1;
    } else {
        return number*factor(number-1);
    }
}
