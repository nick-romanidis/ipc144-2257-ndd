#include "astronaut.h"

#include <stdio.h>

// Check astronaut vitals using selection and logical operators
int isAstronautReady(int oxygen, int heartRate) {
	int ready = 0;

	if (oxygen >= 95 && (heartRate >= 60 && heartRate <= 100)) {
		printf("Astronaut vitals are within safe range.\n");
		ready = 1;
	}
	else {
		printf("Astronaut vitals are NOT safe.\n");
	}

	return ready;
}

// Evaluate launch conditions
int isLaunchApproved(int weatherCode, int astronautReady) {
	int approved = 0;

	if (weatherCode == 0 && astronautReady) {
		printf("Launch is possible.\n");
		approved = 1;
	}
	else if (weatherCode == 1 && astronautReady) {
		printf("Launch possible with caution due to wind.\n");
		approved = 1;
	}
	else if (weatherCode == 2 || !astronautReady) {
		printf("Launch aborted due to unsafe conditions.\n");
	}
	else {
		printf("Launch aborted due to unknown conditions.\n");
	}

	return approved;
}

// Final decision output
void printLaunchDecision(int approved) {
	if (approved) {
		printf("Launch approved. Proceed to ignition.\n");
	}
	else {
		printf("Launch denied. Hold mission.\n");
	}
}