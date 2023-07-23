#include <stdio.h>
#include <stdlib.h>

int main() {
	float m1,m2,m3,m4,m5,avg;
	printf("Enter the marks obtained in 5 subjects::\n");
	scanf("%f %f %f %f %f", &m1,&m2, &m3,&m4,&m5);
	avg = (m1 + m2 + m3 + m4 + m5)/5;
	if (avg>=80) {
		printf("Remarks = Topper");
	} else if (avg<80 && avg>=60) {
		printf("Remarks = 1st Division");
	} else if (avg<60 && avg>=50) {
		printf("Remarks = 2nd Division");
	} else {
		printf("Remarks = Fail");
	}
	return 0;
}

