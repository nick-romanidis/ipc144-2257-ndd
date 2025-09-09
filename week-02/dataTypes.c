#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	// Basic types
	int wholeNumber;
	float decimalNumber;
	double preciseDecimalNumber;
	char singleCharacter;

	// Extended integer types
	short shortNumber;
	long longNumber;
	long long longLongNumber;

	// Unsigned examples
	unsigned int positiveOnly;
	unsigned int wraparoundTest;

	// Input section
	printf("Enter a whole number (int): ");
	scanf("%d", &wholeNumber);

	printf("Enter a decimal number (float): ");
	scanf("%f", &decimalNumber);

	printf("Enter a more precise decimal number (double): ");
	scanf("%lf", &preciseDecimalNumber);

	printf("Enter a single character: ");
	scanf(" %c", &singleCharacter);

	printf("Enter a short integer: ");
	scanf("%hd", &shortNumber);

	printf("Enter a long integer: ");
	scanf("%ld", &longNumber);

	printf("Enter a long long integer: ");
	scanf("%lld", &longLongNumber);

	printf("Enter an unsigned int: ");
	scanf("%u", &positiveOnly);

	// Simulate wraparound by entering a large value
	printf("Enter another unsigned int (try a large number like 4294967295): ");
	scanf("%u", &wraparoundTest);

	// Output section
	printf("\n--- You Entered ---\n");
	printf("int: %d\n", wholeNumber);
	printf("float: %.2f\n", decimalNumber);
	printf("double: %.4lf\n", preciseDecimalNumber);
	printf("char: %c\n", singleCharacter);
	printf("short: %hd\n", shortNumber);
	printf("long: %ld\n", longNumber);
	printf("long long: %lld\n", longLongNumber);
	printf("unsigned int: %u\n", positiveOnly);
	printf("unsigned int (wraparound test): %u\n", wraparoundTest);

	// Output as hex
	printf("Hex: 0x%x\n", wholeNumber);

	// Memory sizes
	printf("\n--- Memory Sizes ---\n");
	printf("Size of char: %lu bytes\n", sizeof(char));
	printf("Size of short: %lu bytes\n", sizeof(short));
	printf("Size of int: %lu bytes\n", sizeof(int));
	printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
	printf("Size of long: %lu bytes\n", sizeof(long));
	printf("Size of long long: %lu bytes\n", sizeof(long long));
	printf("Size of float: %lu bytes\n", sizeof(float));
	printf("Size of double: %lu bytes\n", sizeof(double));

	return 0;
}