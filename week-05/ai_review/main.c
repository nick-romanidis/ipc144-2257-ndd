/* 
Requirements:
- Function 1: char getGrade(int score)
- Returns a letter grade based on score:
- 'A' for 90–100
- 'B' for 80–89
- 'C' for 70–79
- 'D' for 60–69
- 'F' for below 60
- Function 2: int isEligible(int attendance)
- Returns 1 if attendance is 75% or higher, otherwise 0.
- Function 3: void printReport(int score, int attendance)
- Calls getGrade() and isEligible().
- If the student is not eligible, print:
"Ineligible due to low attendance."
- If eligible, print:
"Final Grade: <grade>"
"Status: Pass" if grade is not 'F', otherwise "Status: Fail"
- In main()
- Prompt the user to enter:
- Score (0–100)
- Attendance percentage (0–100)
- Validate both inputs.
- Call printReport().
*/

#include <stdio.h>

char getGrade(int score);
int isEligible(int attendance);
void printReport(int score, int attendance);

int main(void) {
	int score;
	int attendance;

	printf("Enter the score: ");
	scanf("%d", &score);

	printf("Enter the attendance: ");
	scanf("%d", &attendance);

	printReport(score, attendance);

	return 0;
}

// Calculated the letter grade for a given score.
// The score must range from 0 to 100 inclusive.
char getGrade(int score) {
	char grade;

	if (score >= 90 && score <= 100) {
		grade = 'A';
	}
	else if (score >= 80 && score <= 89) {
		grade = 'B';
	}
	else if (score >= 70 && score <= 79) {
		grade = 'C';
	}
	else if (score >= 60 && score <= 69) {
		grade = 'D';
	}
	else {
		grade = 'F';
	}

	return grade;
}

int isEligible(int attendance) {
	int eligible;

	if (attendance >= 75) {
		eligible = 1;
	}
	else {
		eligible = 0;
	}

	return eligible;
}

void printReport(int score, int attendance) {
	int eligible = isEligible(attendance);
	char grade;

	if (!eligible) {
		printf("Ineligible due to low attendance (attendance is %d)", attendance);
	}
	else {
		grade = getGrade(score);

		printf("Final Grade: %d", score);
		
		if (grade != 'F') {
			printf("Status: Pass");
		}
		else {
			printf("Status: Fail");
		}
	}
}

