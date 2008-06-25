#include <stdio.h>
#include <string.h>

int main(void) {
	char ch = 'b';

	if (strchr("abc", ch) != NULL) {
		puts("Yarr!");
	}

	return 0;
}
