#include <stdio.h>

int main() {
	int numerator, denominator, m, n, divisor;

	printf("Enter a fraction: ");
	scanf("%d /%d", &numerator, &denominator);

	m = numerator;
	n = denominator;

	while(n != 0) {
		divisor = n;
		n = m % n;
		m = divisor;
	}

	numerator /= m;
	denominator /= m;

	printf("In lowest terms: %d/%d\n", numerator, denominator);

	return 0;
}

