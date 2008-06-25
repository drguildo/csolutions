#include <stdio.h>
#include <string.h>

int numchar(const char *, char);

int main(void) {
	char *s = "Hello, world";

	printf("%d\n", numchar(s, 'd'));

	return 0;
}

int numchar(const char *s, char ch) {
	int n = 0;

	while ((s = strchr(s, ch)) != NULL) {
		n++;
		s++;
	}

	return n;
}
