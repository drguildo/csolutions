void avg_sum(float a[], int n, float *avg, float *sum)
{
	int i;

	*sum = 0.0;
	for (i = 0; i < n; i++)
		*sum += a[i];
	*avg = *sum / n;
}

