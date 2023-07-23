#include <stdio.h>
#include <stdlib.h>

#define MC 150

int main() {
	int unit;
	printf("Enter the number of units : ");
	scanf("%d", &unit);
	if (unit<=100) {
		printf("Total cost = %d", unit*5 + MC);
	} else if (unit>100 && unit<=300) {
		printf("Total cost = %d", 100*5+ (unit-100)*7 + MC);
	} else {
		printf("Total cost = %d", 100*5+ 200*7 + (unit-300)*9 + MC);
	}
	return 0;
}
