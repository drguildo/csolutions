int digit(int n, int k) {
	int i, num, divisor = 1;

	num = num_digits(n);

	if(k > num)
		return -1;

	num -= k - 1;

	for(i = 0; i < num; ++i)
		divisor *= 10;

	n %= divisor;
	n /= divisor / 10;

	return n;
}

int num_digits(int n) {
	int digits = 0;

	do {
		++digits;
	}	while((n /= 10) != 0);

	return digits;
}

