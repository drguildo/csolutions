#include <stdio.h>

int main() {
	printf("sizeof(int) = %lu\n", (unsigned long) sizeof(int));
	printf("sizeof(short int) = %lu\n", (unsigned long) sizeof(short int));
	printf("sizeof(long int) = %lu\n", (unsigned long) sizeof(long int));
	printf("sizeof(float) = %lu\n", (unsigned long) sizeof(float));
	printf("sizeof(double) = %lu\n", (unsigned long) sizeof(double));
	printf("sizeof(long double) = %lu\n", (unsigned long) sizeof(long double));

	return 0;
}

