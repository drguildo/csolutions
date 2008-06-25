int sum_array(int *a, int n)
{
	int sum = 0;
	int *p;

	for (p = a; p < a + n; p++)
		sum += *p;
	return sum;
}

