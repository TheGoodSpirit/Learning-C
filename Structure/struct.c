#include <stdio.h>
#include <stdlib.h>

struct ID_CARD {
	char name[20];
	int age;
	int rollno;
};

int main() {

	int data_value;
	printf("Enter the range of the data collection : ");
	scanf("%d", &data_value);

	struct ID_CARD STUDENT[data_value];
	printf("\n---------- TAKING INPUT ---------- \n");
	// taking input
	for ( int i = 1; i <= data_value; i++) {
		printf("\n---------- For %d ----------\n", i);
		printf("Enter your name : ");
		scanf("%s", STUDENT[i].name);
		printf("Enter your age : ");
		scanf("%d", &STUDENT[i].age);
		printf("Enter your rollno : ");
		scanf("%d", &STUDENT[i].rollno);
	}
	printf("\n---------- DISPLAYING OUTPUT ---------- \n");
	// displaying output
	for ( int i = 1; i <= data_value; i++) {
		printf("\n---------- For %d ----------\n", i);
		printf("Name = %s\nAge = %d\nRoll no. = %d", STUDENT[i].name, STUDENT[i].age, STUDENT[i].rollno);
	}
	return 0;
}
