#include <stdio.h>

int main() {
	int number;

	printf("Enter a number: ");
	scanf("%d", &number);

	if(number <= 9)
		printf("Your number %d has 1 digit\n", number);
	else
		if(number <= 99)
			printf("Your number %d has 2 digits\n", number);
		else
			if(number <= 999)
				printf("Your number %d has 3 digits\n", number);
			else
				printf("Your number %d has 4 or more digits\n", number);

	return 0;
}

