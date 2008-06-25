#include <ctype.h>
#include <stdio.h>

int main(void) {
	char ch;

	ch = getchar();

	while (ch != EOF) {
		if (isalpha(ch)) {
			putchar(toupper(ch));
			ch = getchar();
			while (isalpha(ch) && ch != EOF) {
				putchar(ch);
				ch = getchar();
			}
		} else {
			while (!isalpha(ch) && ch != EOF) {
				putchar(ch);
				ch = getchar();
			}
		}
	}

	return 0;
}
