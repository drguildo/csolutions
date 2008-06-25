/* Computers a Universal Product Code check digit */

#include <stdio.h>

main()
{
	int d1, d2, i1, i2, i3, i4, i5, j1, j2, j3, j4, j5,
			first_sum, second_sum, checkdigit;

	printf("Enter the first (single) digit: ");
	scanf("%1d", &d1);
	printf("Enter the first group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5);
	printf("Enter the second group of five digits: ");
	scanf("%1d%1d%1d%1d%1d", &j1, &j2, &j3, &j4, &j5);
	printf("Enter the check digit: ");
	scanf("%1d", &d2);

	first_sum = d1 + i2 + i4 + j1 + j3 + j5;
	second_sum = i1 + i3 + i5 + j2 + j4;
	checkdigit = 9 - (((3 * first_sum + second_sum) - 1) % 10);

	if(d2 == checkdigit)
		printf("VALID\n");
	else
		printf("NOT VALID\n");

	return 0;
}

