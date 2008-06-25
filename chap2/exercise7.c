#include <stdio.h>

int main() {
	float radius;

	printf("Radius: ");
	scanf("%f", &radius);
	printf("Volume: %f\n", 4.0/3.0 * 3.14159265 * (radius * radius * radius));

	return 0;
}

