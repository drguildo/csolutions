int gcd(int m, int n) {
	int divisor;

	do {
		divisor = n;
		n = m % n;
		m = divisor;
	} while(n != 0);

	return m;
}

