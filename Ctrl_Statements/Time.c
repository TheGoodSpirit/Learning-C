#include <stdio.h>
#include <stdlib.h>

int main() {
	int sec, hrs, min, ss;
	printf("Enter the number of seconds : ");
	scanf("%d", &sec);

	hrs = sec/3600;
	min = (sec%3600)/60;
	ss = (sec%3600)%60;

	printf("\n%d hours : %d minutes : %d seconds", hrs, min, ss);
	return 0;
}
