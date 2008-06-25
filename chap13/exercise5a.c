#include <ctype.h>
#include <stdio.h>

void strcap(char []);

int main() {
	char str[] = "wanky spanky!";

	strcap(str);

	printf("%s\n", str);

	return 0;
}

void strcap(char str[]) {
	int i;

	for(i = 0; str[i] != '\0'; i++) {
		str[i] = toupper(str[i]);
	}
}

