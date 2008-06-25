#include <stdio.h>

int f(char *, char *);

int main() {

	/* f() returns the location of the last character in s that
	 * matches one in t. it returns if it can't find a match. */

	printf("%d\n", f("abcd", "babc")); /* 3 */
	printf("%d\n", f("abcd", "bcd")); /* 0 */

	return 0;
}

int f(char *s, char *t)
{
	char *p1, *p2;

	for (p1 = s; *p1; p1++) {
		for (p2 = t; *p2; p2++)
			if (*p1 == *p2) break;
		if (*p2 == '\0') break;
	}
	return p1 - s;
}

