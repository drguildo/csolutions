#include <stdio.h>

int main() {
	float largest = 0, n;

	for(;;) {
		printf("Enter a number: ");
		scanf("%f", &n);
		if(n == 0)
			break;
		else
			if(n > largest)
				largest = n;
	}

	printf("\nThe largest number entered was %.2f\n", largest);

	return 0;
}

