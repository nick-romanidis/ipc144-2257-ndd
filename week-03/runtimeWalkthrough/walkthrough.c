#include <stdio.h>

int getInput() {
	int num;
	printf("Enter an integer: ");
	scanf("%d", &num);  // Local variable: num
	return num;
}

int square(int value) {
	int result = value * value;  // Local variable: result
	return result;
}

int addTen(int value) {
	int result = value + 10;  // Local variable: result
	return result;
}

void displayResult(int original, int squared, int added) {
	// Local variables: original, squared, added (passed by value)
	printf("Original: %d\n", original);
	printf("Squared: %d\n", squared);
	printf("Added 10: %d\n", added);
}

int main() {						      // Stack frame: main
	int input = getInput();               // Stack frame: getInput
	int squared = square(input);          // Stack frame: square
	int added = addTen(input);            // Stack frame: addTen
	displayResult(input, squared, added); // Stack frame: displayResult
	return 0;
}