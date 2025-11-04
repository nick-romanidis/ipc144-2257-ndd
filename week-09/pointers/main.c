#include <stdio.h>

void addressOfVariable(void) {
	int x;
	int* p = NULL;

	printf("Address of x          : %x\n\n", &x);

	printf("Enter x : ");
	scanf("%d", &x);
	printf("\n");

	printf("Value stored in x     : %d\n", x);

	// What is %x?
	p = &x;
	printf("Value stored in p (&x): %x\n", p);
	printf("Value stored in *p (x): %d\n", *p);
}

void swapValues(int a, int b)
{
	int c;

	printf("a is %d, b is %d\n", a, b);

	c = a;
	a = b;
	b = c;

	printf("a is %d, b is %d\n", a, b);
}

void demoSwapValues(void)
{
	int a, b;

	printf("a is ");
	scanf("%d", &a);
	printf("b is ");
	scanf("%d", &b);

	swapValues(a, b);

	printf("After internal_swap:\na is %d\n"
		"b is %d\n", a, b);
}

void swapPointers(int* p, int* q)
{
	int c;

	c = *p;
	*p = *q;
	*q = c;
}

void demoSwapPointers(void)
{
	int a, b;

	printf("a is ");
	scanf("%d", &a);
	printf("b is ");
	scanf("%d", &b);

	swapPointers(&a, &b);

	printf("After swap:\na is %d\n"
		"b is %d\n", a, b);
}

// day_to_dm return day and month of given day in year 
// assumes not leap year
//
void day_to_dm(int day, int* d, int* m)
{
	if (day < 32) {
		*m = 1;
		*d = day;
	}
	else if (day < 60) {
		*m = 2;
		*d = day - 31;
	}
	else if (day < 91) {
		*m = 3;
		*d = day - 59;
	}
	else if (day < 121) {
		*m = 4;
		*d = day - 90;
	}
	else if (day < 152) {
		*m = 5;
		*d = day - 120;
	}
	else if (day < 182) {
		*m = 6;
		*d = day - 151;
	}
	else if (day < 223) {
		*m = 7;
		*d = day - 181;
	}
	else if (day < 254) {
		*m = 8;
		*d = day - 222;
	}
	else if (day < 284) {
		*m = 9;
		*d = day - 253;
	}
	else if (day < 305) {
		*m = 10;
		*d = day - 283;
	}
	else if (day < 335) {
		*m = 11;
		*d = day - 304;
	}
	else if (day < 366) {
		*m = 12;
		*d = day - 334;
	}
}

void demoMultipleReturn(void)
{
	int day, d, m;

	printf("Day of Year : ");
	scanf("%d", &day);
	day_to_dm(day, &d, &m);
	printf("Day/Month is %d/%d\n", d, m);
}

int main(void)
{
	//addressOfVariable();

	//demoSwapValues();

	//demoSwapPointers();

	demoMultipleReturn();

	return 0;
}