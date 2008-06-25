#include <stdio.h>
#include <string.h>

int main(void) {
	char *str = "bar";
	char *tokens = "foo|bar|baz";

	/* This assumes that str won't contain the
	 * seperator under normal circumstances */

	if (strstr(tokens, str) != NULL) {
		puts("Yarr!");
	}

	return 0;
}
