#include <ctype.h>
#include <stdio.h>

void strcap(char *);

int main() {
	char str[] = "wanky spanky!";

	strcap(str);

	printf("%s\n", str);

	return 0;
}

void strcap(char *str) {
	while(*str != '\0') {
		*str = toupper(*str);
		str++;
	}
}

