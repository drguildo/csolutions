#include <string.h>
#include <stdio.h>

int main(void) {
	char str[] = "foobarbaz";

	printf("%s\n", str);
	memset(str+6, '!', 3);
	printf("%s\n", str);

	return 0;
}
