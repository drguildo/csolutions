#include <stdio.h>

int main() {
	int i = 2, n, square;

	printf("Enter a number: ");
	scanf("%d", &n);

	do {
		square = i * i;
		if(square % 2 == 0)
			printf("%d\n", square);
		++i;
	} while(square <= n);

	return 0;
}

