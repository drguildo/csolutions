int num_digits(int n) {
	int digits = 0;

	do {
		++digits;
	}	while((n /= 10) != 0);

	return digits;
}

