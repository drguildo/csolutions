#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch, *buf;
	int i, bufsize;

	while ((ch = getchar()) != EOF) {
		i = 0;
		bufsize = 0;
		buf = NULL;
		while (isspace(ch)) {
			if (i == bufsize) {
				bufsize += 10;
				buf = realloc(buf, sizeof(char) * bufsize);
			}
			buf[i++] = ch;
			ch = getchar();
		}
		if (isprint(ch)) {
			if (buf != NULL) {
				if (i == bufsize) {
					buf = realloc(buf, sizeof(char) * (bufsize + 1));
				}
				buf[i] = '\0';
				printf("%s", buf);
				free(buf);
			}
			while (isprint(ch)) {
				putchar(ch);
				ch = getchar();
			}
		}
	}

	puts("");

	return 0;
}
