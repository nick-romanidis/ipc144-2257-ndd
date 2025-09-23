#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#include "astronaut.h"

int getOxygenLevel(void);
int getHeartRate(void);
int getWeatherCode(void);


int main(void) {
	int oxygen = getOxygenLevel();
	int heartRate = getHeartRate();
	int weatherCode = getWeatherCode();

	int astronautReady = isAstronautReady(oxygen, heartRate);
	int launchApproved = isLaunchApproved(weatherCode, astronautReady);

	printLaunchDecision(launchApproved);

	return 0;
}

// Simulate oxygen level input
int getOxygenLevel(void) {
	int level;
	printf("Enter astronaut oxygen level (0-100%%): ");
	scanf("%d", &level);
	return level;
}

// Simulate heart rate input
int getHeartRate(void) {
	int rate;
	printf("Enter astronaut heart rate (bpm): ");
	scanf("%d", &rate);
	return rate;
}

// Simulate weather condition input
int getWeatherCode(void) {
	int code;
	printf("Enter weather code (0 = Clear, 1 = Windy, 2 = Storm): ");
	scanf("%d", &code);
	return code;
}
