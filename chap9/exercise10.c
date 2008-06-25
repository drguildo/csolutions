int largest(int a[], int n) {
	int largest = a[0];

	while(n-- > 0)
		if(a[n] > largest)
			largest = a[n];

	return largest;
}

int average(int a[], int n) {
	int i, sum = 0;

	for(i = 0; i < n; i++)
		sum += a[i];

	return sum / n;
}

int positive(int a[], int n) {
	int i, num = 0;

	for(i = 0; i < n; i++)
		if(a[i] >= 0)
			++num;

	return num;
}

