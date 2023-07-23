#include <stdio.h>
int main() {
	int range;
	printf("Enter the range : ");
	scanf("%d", &range);
	for (int i = 1; i <= range; i++) {
		for (int j = 1; j <= range-i; j++) {
			printf("  ");
		}
		for (int k=0; k != 2*i-1; k++) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}
