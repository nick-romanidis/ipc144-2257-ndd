#define _CRT_SECURE_NO_WARNINGS

/*
Write a complete C program that simulates loading cargo into multiple bays. Your program should include the following functions:s
1. int getCargoWeight()
•	Prompts the user to enter a cargo weight between 100 and 1000 kg.
•	Uses a do-while loop to validate the input.
•	Returns the valid weight.
?
2. void loadCargo(int weight, int bay)
•	Displays a message indicating the cargo is being loaded into a specific bay.
•	Uses a for loop to print one asterisk (*) for every 100 kg of cargo.
•	Ends with a "Done!" message.
3. void setupBays()
•	Prompts the user to enter the number of cargo bays to fill.
•	Uses a while loop to iterate through each bay.
•	For each bay:
•	Displays the bay number.
•	Calls getCargoWeight() to get a validated weight.
•	Calls loadCargo() to simulate the loading process.
4. main()
•	Uses a do-while loop to allow repeated rounds of cargo loading.
•	Calls setupBays() each round.
•	Asks the user whether to repeat the process (y/n).
*/

#include <stdio.h>

int getCargoWeight(void);
void loadCargo(int weight, int bay);
void setupBays(void);

const int MIN_WEIGHT = 100;
const int MAX_WEIGHT = 1000;

int main() {
	char repeat;

	do {
		setupBays();

		scanf("%c", &repeat);

		printf("\nLoad another round of cargo? (y/n): ");
		scanf("%c", &repeat);
	} while (repeat == 'y' || repeat == 'Y');

	return 0;
}

int getCargoWeight(void) {
	int weight;

	do {
		printf("Enter cargo weight between %d to %d kg: ", MIN_WEIGHT, MAX_WEIGHT);
		scanf("%d", &weight);
	} while (weight < MIN_WEIGHT || weight > MAX_WEIGHT);

	return weight;
}

void loadCargo(int weight, int bay) {
	int i;
	int iterations = weight / 100;

	printf("Loading %d kg into Bay #%d ...\n", weight, bay);

	for (i = 0; i < iterations; i++) {
		printf("* ");
	}

	printf("Done!\n");
}

void setupBays(void) {
	int bays;
	int bay;
	int cargoWeight;

	printf("Enter number of cargo bays to fill: ");
	scanf("%d", &bays);

	bay = 1;
	while (bay <= bays) {
		printf("\n--- BAY %d ---\n", bay);
		cargoWeight = getCargoWeight();
		loadCargo(cargoWeight, bay);
		bay++;
	}
}