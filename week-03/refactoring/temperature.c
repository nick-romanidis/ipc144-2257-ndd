#define _CRT_SECURE_NO_WARNINGS

#include "temperature.h"

#include <stdio.h>

double getCelsius(void) {
	double celsius;
	printf("Enter temperature in Celsius: ");
	scanf("%lf", &celsius);
	return celsius;
}

double convertToFahrenheit(double celsius) {
	return (celsius * 9.0 / 5.0) + 32;
}

void displayFahrenheit(double fahrenheit) {
	printf("Fahrenheit: %.2lf\n", fahrenheit);
}
