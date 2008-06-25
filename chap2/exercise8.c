#include <stdio.h>

int main() {
	float dollars;

	printf("Enter a dollar ammount: ");
	scanf("%f", &dollars);

	printf("With tax added: %.2f\n", ((dollars / 100) * 5) + dollars);

	return 0;
}
