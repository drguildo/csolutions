#include <stdio.h>

int main() {
	float radius = 10.0;

	/*
	 * When you use 4/3 instead of 4.0/3.0 the answer is 3141.592650
	 * instead of 4188.790200. This is because dividing 2 integers
	 * results in an integer (the numbers after the decimal place
	 * are dropped).
	 */
	printf("Volume: %f\n", 4.0/3.0 * 3.14159265 * (radius * radius * radius));

	return 0;
}

