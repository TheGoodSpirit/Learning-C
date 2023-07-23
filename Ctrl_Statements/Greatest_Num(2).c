#include <stdio.h>
#include <stdlib.h>

int main() {
	int n1, n2, n3;
	printf("Enter the first number : ");
	scanf("%d", &n1);
	printf("Enter the second number : ");
	scanf("%d", &n2);
	printf("Enter the second number : ");
	scanf("%d", &n3);
	int res = n1>n2 ? (n1>n3 ? n1 : n3) : n2>n3 ? n2 : n3;
	printf("%d is largest number.", res);
	return 0;
}
