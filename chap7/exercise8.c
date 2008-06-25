/* Prints a table of squares using a for statement */

#include <stdio.h>

main()
{
	int i, n;

	printf("This program prints a table of squares.\n");
	printf("Enter a number of entries in table: ");
	scanf("%d", &n);
	getchar(); /* Is there a better way to get rid of the \n from scanf()? */

	for (i = 1; i <= n; i++) {
		if(i % 25 == 0) {
			printf("Press Enter to continue...");
			while(getchar() != '\n')
				;
		}
		printf("%10d%10d\n", i, i * i);
	}

	return 0;
}

