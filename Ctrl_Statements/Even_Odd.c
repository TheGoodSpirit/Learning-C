#include <stdio.h>
#include <stdlib.h>

int main() {
	int n;
	printf("Enter the number : ");
	scanf("%d", &n);
	n%2 == 0 ? printf("%d is Even",n) : printf("%d is Odd",n);
	return 0;
}
