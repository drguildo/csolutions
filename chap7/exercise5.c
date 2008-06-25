/* Sums a series of numbers (using long int variables) */

#include <stdio.h>

main()
{
	double n, sum = 0.0;

	printf("This programs sums a series of integers.\n");
	printf("Enter integers (0 to terminate): ");

	scanf("%lf", &n);
	while (n != 0.0) {
		sum += n;
		scanf("%lf", &n);
	}
	printf("The sum is: %lf\n", sum);

	return 0;
}

