#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>

char *vstrcat(const char *, ...);

int main(void) {
	char *str = vstrcat("i", "like", "to", "move", "it", (char *)NULL);
	printf("%s\n", str);
	return 0;
}

char *vstrcat(const char *first, ...) {
	char *str, *newstr;
	va_list ap;

	if ((str = malloc(strlen(first)+1)) == NULL)
		return NULL;

	strcpy(str, first);

	va_start(ap, first);

	newstr = va_arg(ap, char *);

	while (newstr != NULL) {
		if ((str = realloc(str, strlen(str) + strlen(newstr) + 1)) == NULL) {
			free(str);
			return NULL;
		} else {
			strcat(str, newstr);
			newstr = va_arg(ap, char *);
		}
	}

	va_end(ap);

	return str;
}
