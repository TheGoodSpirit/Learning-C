#include <stdio.h>
#include <stdlib.h>

int main() {
	int num, sum=0, rem;
	printf("Enter the multidigit number: ");
	scanf("%d", &num);

	rem = num%10;
	while(num>10) {
		num/=10;
	}
	sum= num + rem;
	printf("Sum = %d", sum);
	return 0;
}
