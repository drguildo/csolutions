/* Checks numbers for repeated digits */

#include <stdio.h>

main()
{
	int digit_seen[10] = {0}, digit, i;
	long int n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		digit_seen[digit]++;
		n /= 10;
	}

	printf("Digit:\t\t");
	for(i = 0; i < 10; i++)
		printf("%3d", i);
	printf("\n");

	printf("Occurences:\t");
	for(i = 0; i < 10; i++)
			printf("%3d", digit_seen[i]);
	printf("\n");

	return 0;
}
