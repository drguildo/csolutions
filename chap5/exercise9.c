#include <stdio.h>

int main() {
	int income;
	float tax;

	printf("Enter taxable income: ");
	scanf("%d", &income);

	if(income <= 750)
		tax = income * .01;
	else if(income > 750 && income <= 2250)
		tax = 7.50 + ((income - 750) * .02);
	else if(income > 2250 && income <= 3750)
		tax = 37.50 + ((income - 2250) * .03);
	else if(income > 3750 && income <= 5250)
		tax = 82.50 + ((income - 3750) * .04);
	else if(income > 5250 && income <= 7000)
		tax = 142.50 + ((income - 5250) * .05);
	else
		tax = 230.00 + ((income - 7000) * .06);

	printf("Tax due: $%.2f\n", tax);

	return 0;
}

