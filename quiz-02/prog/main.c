#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int getBookCount(void);
double getBookPrice(void);
double applyDiscounts(int bookCount, double pricePerBook);
void showBreakdown(int bookCount, double pricePerBook, double discount);

int getBookCount(void) {
	int bookCount;
	printf("How many books: ");
	scanf("%d", &bookCount);
	return bookCount;
}

double getBookPrice(void) {
	double bookPrice;
	printf("How much are each book: ");
	scanf("%lf", &bookPrice);
	return bookPrice;
}

double applyDiscounts(int bookCount, double pricePerBook) {
	double discount;
	double cost = (double)bookCount * pricePerBook;

	if (bookCount >= 5) {
		discount = cost * 0.1;
	}
	else {
		discount = cost * 0.05;
	}

	return discount;
}

void showBreakdown(int bookCount, double pricePerBook, double discount) {
	double total = (double)bookCount * pricePerBook;
	double grandTotal = total - discount;

	printf("%d Books at $%.2lf each, is $%.2lf", bookCount, pricePerBook, total);
	printf("Discount is %.2lf", discount);
	printf("Total is $%.2lf", grandTotal);
}

int main(void) {
	int bookCount = getBookCount();
	double bookPrice = getBookPrice();
	double discount = applyDiscounts(bookCount, bookPrice);
	showBreakdown(bookCount, bookPrice, discount);

	return 0;
}

