#include <stdio.h>

#define PI 3.14159265

int main() {
	float radius;

	printf("Radius: ");
	scanf("%f", &radius);
	printf("Volume: %f\n", 4.0/3.0 * PI * (radius * radius * radius));

	return 0;
}

