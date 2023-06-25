#include <stdio.h>
#include <stdlib.h>


int main() {

	char name[20];

	// declaring a pointer
	FILE *test;

	/*-- Opening a file
	if the file that we are trying to open doesn't exist the function
	creates a new file of given name.-- */
	test = fopen("test.txt","r");

	
	// checking if the file is empty or not.
	// if empty then displaying error.
	// if not empty displaying the content of the file
	if(test == NULL) {
		printf("Error: file is empty!");
		exit(1);
	} else {
		// storing the content of the file in 'name' the variable
		fscanf(test,"%s", name);
		printf("Value : %s", name);
	}
	
	//closing the file
	fclose(test);

	return 0;

}
