#include <stdio.h>
#include <stdarg.h>

int max_int(int, ...);

int main(void) {
	printf("%d\n", max_int(300, 10, 30, 20, 0));
	return 0;
}

int max_int(int n, ...) {
	va_list ap;
	int i, current, largest;

	largest = n;
	va_start(ap, n);

	for (i = 1; i < n; i++) {
		current = va_arg(ap, int);
		if (current == 0)
			break;
		if (current > largest)
			largest = current;
	}

	va_end(ap);
	return largest;
}
