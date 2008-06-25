#include <stdio.h>

int main() {
	int daysinmonth, startingday, i;

	printf("Enter number of days in month: ");
	scanf("%d", &daysinmonth);

	printf("Enter starting day of week (1=Sun, 7=Sat): ");
	scanf("%d", &startingday);

	for(i = 1; i < startingday; ++i)
		printf("   ");

	for(i = 1; i <= daysinmonth; ++i) {
		printf("%-3d", i);
		if((i + (startingday - 1)) % 7 == 0 || i == daysinmonth)
			printf("\n");
	}

	return 0;
}

