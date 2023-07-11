#include <stdio.h>
#include <stdlib.h>

struct ID_CARD {
	char name[20];
	int age;
	int rollno;
};

int main() {

	FILE *STD_REC;

	int data_range;
	printf("Enter the range of the data collection : ");
	scanf("%d", &data_range);

	struct ID_CARD STUDENT[data_range];

	STD_REC = fopen("STD_REC.txt", "a");

	if (data_range == 0) {
		printf("There is nothing to record!");
		exit(1);
	} else {
		printf("\n---------- TAKING INPUT ---------- \n");
		// taking input
		for ( int i = 1; i <= data_range; i++) {
			printf("\n---------- %d ----------\n", i);
			printf("Enter name : ");
			scanf("%s", STUDENT[i].name);
			printf("Enter age : ");
			scanf("%d", &STUDENT[i].age);
			printf("Enter roll no : ");
			scanf("%d", &STUDENT[i].rollno);
		}

		for (int j = 1; j <= data_range; j++) {
			fprintf(STD_REC, "\nName = %s\n", STUDENT[j].name);
			fprintf(STD_REC, "Age = %d\n", STUDENT[j].age);
			fprintf(STD_REC, "Roll no. = %d\n", STUDENT[j].rollno);
		}

		printf("\n|---------- ------------------- ------------ |");
		printf("\n| Data is successfully added to the database |");
		printf("\n|---------- ------------------- -------------|");
		fclose(STD_REC);
	}

	return 0;
}
