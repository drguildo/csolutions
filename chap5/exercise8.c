#include <stdio.h>

int main() {
	int velocity;

	printf("Enter a wind velocity (in knots): ");
	scanf("%d", &velocity);

	if(velocity < 1)
		printf("Calm\n");
	else if(velocity >= 1 && velocity <= 3)
		printf("Light air\n");
	else if(velocity >= 4 && velocity <= 27)
		printf("Breeze\n");
	else if(velocity >= 28 && velocity <= 47)
		printf("Gale\n");
	else if(velocity >= 48 && velocity <= 63)
		printf("Storm\n");
	else
		printf("Hurricane\n");

	return 0;
}

