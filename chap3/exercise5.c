#include <stdio.h>

int main() {
	int itemno, day, month, year;
	float unitprice;

	printf("Enter item number: ");
	scanf("%d", &itemno);

	printf("Enter unit price: ");
	scanf("%f", &unitprice);

	printf("Enter purchase date: ");
	scanf("%d/%d/%d", &month, &day, &year);

	printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
	printf("%d\t\t$%4.2f\t\t%d/%d/%d\n", itemno, unitprice, month, day, year);

	return 0;
}

