#include <stdio.h>

void swap(int *, int *);

int main()
{
	int x = 1, y = 2;

	swap(&x, &y);
	printf("x = %d, y = %d\n", x, y);
	return 0;
}

void swap(int *p, int *q)
{
	int tmp;

	tmp = *p;
	*p = *q;
	*q = tmp;
}

