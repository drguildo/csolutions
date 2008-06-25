/* Prints a table of squares using a for statement */

#include <stdio.h>

main()
{
	long int i;
	int n;

	printf("This program prints a table of squares.\n");
	printf("Enter a number of entries in table: ");
	scanf("%d", &n);

	/* The smallest value of n that causes failure is 46,341.
	 * 46,341^2 is 2,147,488,281 which exceeds the maximum value
	 * for a signed 32bit int which is 2^31 = 2,147,483,648.
	 *
	 * With i as a short, the program fails with a value of
	 * 32,767. This would indicate that short is a 16bit value.
	 *
	 * With i as a long, the program fails with a value of
	 * 46,341. This would indicate that long is a 32bit value.
	 */

	for (i = 1; i <= n; i++)
		printf("%10ld%10ld\n", i, i * i);

	return 0;
}

