#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

#define MAX_NAME_LEN 30
#define NUM_SCORES 3

struct Student {
	char firstName[MAX_NAME_LEN + 1];
	char lastName[MAX_NAME_LEN + 1];
	int scores[NUM_SCORES];
	float average;
};

float calculateAverage(const int arrScores[], int numScores) {
	float avg = 0.0;
	int i;

	for (i = 0; i < numScores; i++) {
		avg += arrScores[i];
	}

	avg /= numScores;

	return avg;
}

int main() {
	int i;
	FILE* fp;
	struct Student s;
	char choice[10];

	// Open the file for write. Truncate if it exists. Create if it doesn't.
	fp = fopen("students.txt", "w");

	if (fp != NULL) {
		// File was opened successfully.
		// Otherwise, it would have been NULL.

		do {
			// Read the first and last name from the keyboard.
			printf("Enter the first name: ");
			scanf("%s", s.firstName);

			printf("Enter the last name: ");
			scanf("%s", s.lastName);

			// Read all NUM_SCORES scores from the keyboard.
			for (i = 0; i < NUM_SCORES; i++) {
				printf("Enter score %d: ", i + 1);
				scanf("%d", &s.scores[i]);
			}

			s.average = calculateAverage(s.scores, NUM_SCORES);

			// Write to the file, each value of the struct,
			// on a single line of text. One student per line.
			fprintf(fp, "%s %s %d %d %d %f\n", s.firstName, s.lastName,
				s.scores[0], s.scores[1], s.scores[2], s.average);

			printf("Add another student? (Y/N): ");
			scanf("%s", choice);
		} while (choice[0] == 'y' || choice[0] == 'Y');

		// Close the file. Set pointer to NULL so we
		// can check if it is open in the future.
		fclose(fp);
		fp = NULL;

		// Reading phase. Open the file for read mode, it must exist.
		fp = fopen("students.txt", "r");

		if (fp != NULL) {
			printf("\n--- Student Records ---\n");

			while (fscanf(fp, "%s %s %d %d %d %f",
				s.firstName, s.lastName,
				&s.scores[0], &s.scores[1], &s.scores[2],
				&s.average) == 6) {

				printf("Name is: %s %s\n", s.firstName, s.lastName);
				printf("Scores: %d, %d, %d\n", s.scores[0], s.scores[1], s.scores[2]);
				printf("Average: %.2f\n\n", s.average);
			}

			// Close the file.
			fclose(fp);
			fp = NULL;
		}
	}



	return 0;
}