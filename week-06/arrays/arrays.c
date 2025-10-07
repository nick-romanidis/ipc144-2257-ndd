#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void readNumbers(int numbers[], int size);
int sumArray(const int numbers[], int size);
void printExpression(const int numbers[], int size);

void readWord(char word[], int size);
void allCaps(char word[]);
char toUpper(char ch);

#define SIZE 3
#define WORD_SIZE 9

int main() {

	int numbers[SIZE];
	int sum;

	char word[WORD_SIZE + 1];

	printf("Enter %d integers...\n", SIZE);
	readNumbers(numbers, SIZE);

	sum = sumArray(numbers, SIZE);
	printf("\nSum of array: %d\n", sum);

	printf("Expression is: ");
	printExpression(numbers, SIZE);

	printf("Enter a word (max %d characters): ", WORD_SIZE);
	readWord(word, WORD_SIZE + 1);

	printf("Original Word: %s\n", word);
	allCaps(word);
	printf("Uppercase Word: %s\n", word);

	return 0;
}

void readNumbers(int numbers[], int size) {
	for (int i = 0; i < size; i++) {
		printf("Enter element [%d]: ", i);
		scanf("%d", &numbers[i]);
	}
}

int sumArray(const int numbers[], int size) {
	int sum = 0;

	for (int i = 0; i < size; i++) {
		sum += numbers[i];
	}

	return sum;
}
// 1, 2, 3, 4
void printExpression(const int numbers[], int size) {
	for (int i = 0; i < size; i++) {
		if (i > 0) {
			printf(", ");
		}

		printf("%d", numbers[i]);
	}

	printf("\n");
}

void readWord(char word[], int size) {
	scanf("%s", word);
}

void allCaps(char word[]) {
	for (int i = 0; word[i] != '\0'; i++) {
		word[i] = toUpper(word[i]);
	}
}

char toUpper(char ch) {
	char upper = ch;

	if (ch >= 'a' && ch <= 'z') {
		upper = ch - ('a' - 'A');  // or ch - 32;
	}

	return upper;
}