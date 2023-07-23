// program to find the the simple interest
#include <stdio.h>
//~#include <stdlib.h>

int main() {

	float P,T,R;
	printf("Enter the amount of principal : ");
	scanf("%f", &P);
	printf("Enter the Time : ");
	scanf("%f", &T);
	printf("Enter the Rate : ");
	scanf("%f", &R);

	printf("\nSimple Interest = %.2f", (P*T*R)/100);
	return 0;
}
