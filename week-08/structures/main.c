// main.c

// Include the standard I/O library.
#include <stdio.h>

// The following line includes the description/declaration
// of a Student struct.
#include "Student.h" 

int main(void)
{
	// Allocates memory for jane but does not define
	// default values for the two data members.
	struct Student jane;

	// Allocates memory for harry and defines default values.
	// It sets "no" = 975 and "grades[]" to 75.6, 82.3, 68.9, 0.0
	struct Student harry = { 975, { 75.6f, 82.3f, 68.9f }, 22 };

	// We can access a member using dot-notation.
	printf("harry's student number is: %d\n", harry.no);
	printf("harry's second grade is: %.1f\n", harry.grade[1]);
	printf("\n");

	// We can change values at any time.
	harry.grade[1] = 90.1f;
	printf("harry's second grade is now: %.1f\n", harry.grade[1]);
	printf("\n");


	// Where is harry located in memory?
	printf("harry has the address: %lx          [%d]\n", &harry, &harry);
	printf("harry.no has the address: %lx       [%d]\n", &harry.no, &harry.no);

	// Where is harry's grade array located?
	// Notice we don't need brackets ... &(harry.grade)
	printf("harry.grade has the address: %lx    [%d]\n", &harry.grade, &harry.grade);
	printf("harry.grade[1] has the address: %lx [%d]\n", &(harry.grade[1]) , &harry.grade[1]);
	printf("harry.age has the address: %lx      [%d]\n", &harry.age, &harry.age);


	return 0;
}