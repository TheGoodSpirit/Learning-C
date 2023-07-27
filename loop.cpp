#include <stdio.h>
#include <stdlib.h>

int main() {
	int range, n=1, ch='A';
	char string[] = "Kathmandu";
	printf("Enter the range : ");
	scanf("%d", &range);
	printf("-----------------------\n");
	for(int i = 1; i<=range;i++) {
		for(int j = 1;j<=i; j++) {
			printf("%d ", j);
		}
			printf("\n");
	}
	printf("-----------------------\n");
	for(int i = range; i>=1;i--) {
		for(int j = 1;j<=i; j++) {
			printf("%d ", j);
		}
			printf("\n");
	}
	printf("-----------------------\n");
	for(int i = 1; i<=range;i++) {
		for(int j = 1;j<i; j++) {
			printf("%d ", i);
		}
		printf("%d\n", i);
	}
	
	printf("-----------------------\n");
	for(int i = 1; i<=range;i++) {
		for(int j = 1;j<=i; j++) {
			printf("%c ", ch);
			ch++;
		}
		printf("\n");
	}
	
	printf("-----------------------\n");
	for(int i = 1; i<=range;i++) {
		for(int j = 1;j<= range-i; j++) {
			printf("  ");
		}
		for(int k = 1;k<=i; k++) {
			printf("* ");
		}
		printf("\n");
	}
	
	printf("-----------------------\n");
	for(int i = 1; i<=range;i++) {
		for(int j = 1;j<= range-i; j++) {
			printf("  ");
		}
		for(int k = 1;k<=2*i-1; k++) {
			printf("%d ", k);
		}
		printf("\n");
	}
	
	printf("-----------------------\n");
	for(int i = 0; string[i] != '\0'; i++) {
		for (int j = 0; j<=i; j++) {
			printf("%c ", string[j]);
		}
		printf("\n");
	}
	printf("-----------------------\n");
	return 0;
}