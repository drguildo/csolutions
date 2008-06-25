#include <stdio.h>
#include <stdarg.h>

void xprintf(const char *, ...);

int main(void) {
	xprintf("Chapter %d Exercise %d Test % %j", 26, 2);
	puts("");
	return 0;
}

void xprintf(const char *format, ...) {
	int n;
	va_list ap;

	va_start(ap, format);

	while (*format) {
		if (*format == '%' && *(format+1) == 'd') {
			n = va_arg(ap, int);
			printf("%d", n); /* i know. */
			format += 2;
		} else {
			putchar(*format);
			format++;
		}
	}

	va_end(ap);
}
