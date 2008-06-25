#include <stdio.h>

int main() {
	int m, n, divisor;

	printf("Enter two integers: ");
	scanf("%d %d", &m, &n);

	do {
		divisor = n;
		n = m % n;
		m = divisor;
	} while(n != 0);

	printf("Greatest common divisor: %d\n", m);

	return 0;
}

