#include <stdio.h>

int count_spaces(const char *s);

int main() {
	char str[] = " how many spaces are there?";

	printf("%d spaces.\n", count_spaces(str));

	return 0;
}

int count_spaces(const char *s) {
	int count = 0;

	while (*s)
		if (*s++ == ' ')
			count++;
	return count;
}

