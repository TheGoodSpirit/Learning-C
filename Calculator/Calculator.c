#include <stdio.h>
#include <stdlib.h>

// declaring a function
int calculate(int num1,int num2);

int main() {

	// Declaring variables to store the numbers
	int num1, num2;
	
	printf("Enter First Number : ");
	scanf("%d", &num1);

	printf("Enter Second Number : ");
	scanf("%d", &num2);

	printf("\nResult = %d", calculate(num1, num2));
	
	return 0;
	
}

// initializing the calculate() function
int calculate(int num1, int num2) {

	int res;
	int op;

	printf("\n---------- OPTIONS ----------\n");
	printf("\nType 1 for Adition");
	printf("\nType 2 for Subtraction");
	printf("\nType 3 for Multiplication");
	printf("\nType 4 for division\n");

	printf("\nOperation : ");
	scanf("%d", &op);
	
	switch (op)
	{
		case 1:
			res = num1 + num2;
			return res;
			break;
		case 2:
			res = num1 - num2;
			return res;
			break;
		case 3:
			res = num1 * num2;
			return res;
			break;
		case 4:
			res = num1 / num2;
			return res;
			break;
		default:
			return 0;
	}
	
}
