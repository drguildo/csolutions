#include <stdio.h>

int main() {
	int language, publisher, booknumber, checkdigit;

	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d", &language, &publisher, &booknumber, &checkdigit);

	printf("Language: %d\n", language);
	printf("Publisher: %d\n", publisher);
	printf("Book number: %d\n", booknumber);
	printf("Check digit: %d\n", checkdigit);

	return 0;
}

