#include <stdio.h>

#define GRADE_NUM 3

struct Student
{
	char name[50];
	int scores[GRADE_NUM];
	int age;
};

void copyString(char* dest, const char* src) {
	int i = 0;

	while (src[i] != '\0') {
		dest[i] = src[i];
		i++;
	}

	dest[i] = '\0';
}

void calculateTotalAndAverage(const struct Student* s, int* totalC, float* average) {
	total = 0;
	
	for (int i = 0; i < GRADE_NUM; i++) {
		*total += s->scores[i];
	}

	(*s).age;
	s->age;
}

int main() {
	struct Student alice = { "Alice", { 84, 100, 96 } };

	struct Student john;
	char name[] = "John";
	copyString(john.name, name);
	john.scores[0] = 89;
	john.scores[1] = 67;
	john.scores[2] = 41;

	int totalM = 999;
	calculateTotalAndAverage(&alice, totalM, )
}

