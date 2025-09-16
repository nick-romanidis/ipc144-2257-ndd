#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include "temperature.h"

int main() {
	double celsius, fahrenheit;

	do {
		celsius = getCelsius();
		fahrenheit = convertToFahrenheit(celsius);
		displayFahrenheit(fahrenheit);
	} while (1);

	return 0;
}
