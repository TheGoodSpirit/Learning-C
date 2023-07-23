#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, sum=0, rem;
	printf("Enter the multidigit number: ");
	scanf("%d", &num);

	while(num>0) {
		rem = num%10;
		sum+=rem;
		num/=10;
	}

	printf("Sum = %d", sum);
	return 0;
}
