/* Checks numbers for repeated digits */

#include <stdio.h>

main()
{
	int digit_seen[10] = {0}, digit, i, repeats;
	long int n;

	printf("Enter a number: ");
	scanf("%ld", &n);

	while (n > 0) {
		digit = n % 10;
		digit_seen[digit]++;
		if(!repeats && digit_seen[digit] > 1)
			repeats = 1;
		n /= 10;
	}

	if (repeats) {
		printf("Repeated digits:");
		for(i = 0; i < 10; i++)
			if(digit_seen[i] > 1)
				printf(" %d", i);
		printf("\n\n");
	} else {
		printf("No repeated digits\n\n");
	}

	return 0;
}

