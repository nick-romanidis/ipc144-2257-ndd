#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main(void) {
	int minutes;
	float hours;

	// Get the number of minutes
	printf("Enter minutes: ");
	scanf("%d", &minutes);

	// Calculate the number of hours (without using a cast)
	hours = minutes / 60;
	printf("= %.2lf hours (no cast)\n", hours);

	// Calculate the number of hours (with a cast)
	hours = (float)minutes / 60;
	printf("= %.2lf hours (with cast)\n", hours);

	return 0;
}