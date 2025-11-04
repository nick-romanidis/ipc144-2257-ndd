#include <stdio.h>

#define NAME_MAX_LEN 29

// Struct to represent a tool
struct Tool {
	char name[NAME_MAX_LEN + 1];
	int ageYears;
	int needsRepair; // 0 = no, 1 = yes
};

// Function that takes a struct by value
void displayToolByValue(struct Tool t) {
	printf("By Value: %s is %d years old", t.name, t.ageYears);

	if (t.needsRepair) {
		printf(" and needs repair.\n");
	}
	else {
		printf(" and is in good condition.\n");
	}
}

// Function that takes a struct by pointer
void displayToolByPointer(const struct Tool* t) {
	printf("By Value: %s is %d years old", t->name, t->ageYears);

	if (t->needsRepair) {
		printf(" and needs repair.\n");
	}
	else {
		printf(" and is in good condition.\n");
	}
}

void estimateRepair(const struct Tool* t, double* cost, int* daysRequired) {
	if (t->needsRepair) {
		*cost = 20.0 + (t->ageYears * 5.0); // Older tools cost more
		*daysRequired = 2 + t->ageYears / 2; // Older tools take longer
	}
	else {
		*cost = 0.0;
		*daysRequired = 0;
	}
}

int main(void) {
	struct Tool wrench = { "Wrench", 4, 1 };

	displayToolByValue(wrench);
	displayToolByPointer(&wrench);

	double repairCosts;
	int repairDays;

	estimateRepair(&wrench, &repairCosts, &repairDays);

	printf("Estimated repair cost is: $%.2lf, Time: %d days\n", repairCosts, repairDays);

	return 0;
}