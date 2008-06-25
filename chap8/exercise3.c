/* Checks numbers for repeated digits */

#include <stdio.h>

main()
{
	int digit_seen[10] = {0}, digit, i;
	long int n;

	printf("Enter some numbers (0 to terminate): ");
	scanf("%ld", &n);

	while(n > 0) {
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

		for(i = 0; i < 10; i++)
			digit_seen[i] = 0;

		scanf("%ld", &n);
	}

	return 0;
}
