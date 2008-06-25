#include <stdio.h>

int main() {
	char *p = "abc";

	putchar(p); /* illegal. p is a pointer, not a character. */
	putchar(*p); /* legal. a. */
	puts(p); /* legal. abc\n. */
	puts(*p); /* illegal. *p is a character, not a pointer. */

	return 0;
}

