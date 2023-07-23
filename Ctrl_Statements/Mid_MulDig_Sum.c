#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, sum=0, rem;
	printf("Enter the multidigit number: ");
	scanf("%d", &num);
	num/=10;

	while(num>10) {
		rem = num%10;
		sum= sum + rem;
		num/=10;
	}

	printf("Sum = %d", sum);
	return 0;
}
