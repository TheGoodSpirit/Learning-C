#include <stdio.h>
#include <stdlib.h>


int main() {

	char name[20];

	// declaring a pointer
	FILE *test;

	/*-- Opening a file
	if the file that we are trying to open doesn't exist the function
	creates a new file of given name.-- */
	test = fopen("test.txt","w");

	printf("Enter Your Name: ");
	scanf("%s", name);

	
	fprintf(test,"%s", name);

	//closing the file
	fclose(test);

	return 0;

}
