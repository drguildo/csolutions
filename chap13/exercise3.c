#include <stdio.h>

int main() {
	int i, j;
	char s[6];

	scanf("%d%s%d", &i, s, &j);

	/*
	 * i = 12
	 * s = abc34)
	 * j = 56
	 *
	 * scanf() keeps reading until it hits a newline, tab or space
	 * character.
	 */

	printf("i = %d\n", i);
	printf("s = %s\n", s);
	printf("j = %d\n", j);

	return 0;
}

