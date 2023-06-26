#include <stdio.h>
#include <stdlib.h>

int main() {

	// Declaring variables to store the numbers
	int op;
	float num1, num2;

	printf("Enter First Number : ");
	scanf("%f", &num1);

	printf("Enter Second Number : ");
	scanf("%f", &num2);

	printf("\n---------- OPTIONS ----------\n");
	printf("\nType 1 for Adition");
	printf("\nType 2 for Subtraction");
	printf("\nType 3 for Multiplication");
	printf("\nType 4 for division\n");

	printf("\nOperation : ");
	scanf("%d", &op);

	// working mechanism for the calculation
	switch (op)
	{
		case 1:
			printf("Result = %f", num1 + num2);
			break;
		case 2:
			printf("Result = %f", num1 - num2);
			break;
		case 3:
			printf("Result = %f", num1 * num2);
			break;
		case 4:
			printf("Result = %f", num1 / num2);
			break;
		default:
			return 0;
	}
	return 0;
}
