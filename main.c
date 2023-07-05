#include <stdio.h>
#include <stdlib.h>

// declaring functions
void GREET();
void PRINT_AN_INTEGER();
void ADD_TWO_INTEGER();
void MUL_TWO_FLOAT();
void ASCII_VALUE();
void QUOTIENT_REMAINDER();
void SIZEOF_INT_CHAR_FLOAT_DOUBLE();
void SIZEOF_LONG();
void SWAP_NUMBERS();
void EVEN_OR_ODD();
void VOWEL_OR_CONSONANT();
void LARGEST_NUMBER();


// declaring varaibles at a globle scope
int num , num1, num2;
char string,a;

int main() {
	//~GREET();
	//~PRINT_AN_INTEGER();
	//~ADD_TWO_INTEGER();
	//~MUL_TWO_FLOAT();
	//~ASCII_VALUE();
	//~QUOTIENT_REMAINDER();
	//~SIZEOF_INT_CHAR_FLOAT_DOUBLE();
	//~SIZEOF_LONG();
	//~SWAP_NUMBERS();
	//~EVEN_OR_ODD();
	//~VOWEL_OR_CONSONANT();
	//~LARGEST_NUMBER();
	return 0;
}

// 1. C "Hello, world!" Program
void GREET() {
	printf("Hello, World\n");
}

// 2. C program to print an integer (Entered by the user)
void PRINT_AN_INTEGER() {
	printf("Enter a number : ");
	scanf("%d", &num);
	printf("Number = %d", num);
}

// 3. C program to add 2 integers
void ADD_TWO_INTEGER() {
	printf("Enter first number : ");
	scanf("%d", &num1);
	printf("Enter second number : ");
	scanf("%d", &num2);
	printf("%d + %d = %d", num1, num2, num1 + num2);
}

// 4. C program to multiply 2 floating-point number
void MUL_TWO_FLOAT() {
	double num1, num2;
	printf("Enter first number : ");
	scanf("%lf", &num1);
	printf("Enter second number : ");
	scanf("%lf", &num2);
	printf("Product = %.2lf", num1 + num2);
}

// 5. C program to find the ASCII value of a character
void ASCII_VALUE() {
	char a;
	printf("Enter a character : ");
	scanf("%c", &a);
	printf("ASCII value of %c = %d",a, a);
}

// 6. C program to compute quotient and remainder
void QUOTIENT_REMAINDER() {
	printf("Enter first number(dividend) : ");
	scanf("%d", &num1);
	printf("Enter second number(divisor) : ");
	scanf("%d", &num2);
	printf("Quotient = %d\tRemainder= %d", num1/num2, num1 % num2);
}

// 7. Cprogram to find the size of char, int , float and double
void SIZEOF_INT_CHAR_FLOAT_DOUBLE() {
	float a;
	double b;
	printf("Sizeof float = %d\n", sizeof(a));
	printf("Sizeof int = %d\n", sizeof(num));
	printf("Sizeof double = %d\n", sizeof(b));
	printf("Sizeof char = %d\n", sizeof(string));
}

// 8. Cprogram to demonstrate the working of keyword "long"
void SIZEOF_LONG() {
	long num2;
	long long num3;
	double b;
	long double d;
	printf("Sizeof long int = %d\n", sizeof(num2));
	printf("Sizeof long long int = %d\n", sizeof(num3));
	printf("Sizeof double = %d\n", sizeof(b));
	printf("Sizeof long double = %d\n", sizeof(d));
}

// 9. C program to swap numbers
void SWAP_NUMBERS() {
	int num0;
	printf("Enter first number(num1) : ");
	scanf("%d", &num1);
	printf("Enter second number(num2) : ");
	scanf("%d", &num2);
	num0 = num1;
	num1 = num2;
	num2 = num0;
	printf("Num1 = %d\nNum2 = %d", num1, num2);
}

// 10. C program to whether a number is even or odd
void EVEN_OR_ODD() {
	printf("Enter a number : ");
	scanf("%d", &num1);
	if(num1 % 2 != 0) {
		printf("%d is a odd number", num1);
	} else {
		printf("%d is a even number", num1);
	}
}

// 11. C program to check whether a character is a Vowel or Consonant
void VOWEL_OR_CONSONANT() {
	const int size = 10;
	char vowels[10] = {'a','e','i','o','u','A','E','I','O','U'};
	printf("Enter a character : ");
	scanf("%c", &a);
	for(int i=0; i<size; i++) {
		if (a == vowels[i]) {
			printf("%c is a Vowel", a);
			exit(1);
		}
	}
	printf("%c is a consonant", a);
}

// 12. C program to find the largest number among three numbers
void LARGEST_NUMBER() {
	printf("Enter first number : ");
	scanf("%d", &num);
	printf("Enter second number : ");
	scanf("%d", &num1);
	printf("Enter third number : ");
	scanf("%d", &num2);
	if (num > num1 && num > num2) {
		printf("%d is the largest number", num);
	} else if(num1 > num && num1 > num2) {
		printf("%d is the largest number", num1);
	} else {
		printf("%d is the largest number", num2);
	}
}

// 13. C program to find the roots of quadratic equation