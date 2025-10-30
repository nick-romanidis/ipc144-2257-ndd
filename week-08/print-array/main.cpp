#include <stdio.h>

#define CAP 20

void printArray(int array[], int size);

int main(void)
{
	int array[CAP] = { 1, 5, 4, 3, 2 };
	int result = sum(array, 5);

	printArray(array, 5);
}

void printArray(int array[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}