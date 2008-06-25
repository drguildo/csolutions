float fact(int n) {
	int i, sum = 1;

	if(n <= 1)
		return -1;

	for(i = 2; i <= n; ++i)
		sum *= i;

	return sum;
}

