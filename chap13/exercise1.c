#include <stdio.h>

int main() {
	printf("%c", '\n');
	printf("%c", "\n"); /* "\n" is a string, not a character */
	printf("%s", '\n'); /* '\n' is a character, not a string */
	printf("%s", "\n");
	printf('\n'); /* printf() requires a string as its first parameter */
	printf("\n");
	putchar('\n');
	putchar("\n"); /* putchar() requires a character as its first parameter */
	puts('\n'); /* puts() requires a string as its first parameter */
	puts("\n"); /* this will print 2 newlines instead of 1 */
	puts("");

	return 0;
}

