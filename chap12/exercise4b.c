#include <stdio.h>

#define N 100

int main() {
	char sentence[N], ch;
	char *p = sentence;

	printf("Enter a message: ");

	while(p < &sentence[N] && (ch = getchar()) != '\n') {
		*p++ = ch;
	}

	while(p >= sentence) {
		printf("%c", *(--p));
	}

	printf("\n");

	return 0;
}

