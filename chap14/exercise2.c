#include <stdio.h>

#define NELEM(a) sizeof(a) / sizeof(a[0])

int main() {
	int a[12];

	printf("NELEM(a) = %d\n", NELEM(a));

	return 0;
}

