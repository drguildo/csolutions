#include <stdio.h>

#define N 100

int main() {
	char sentence[N], ch;
	int i = 0;

	printf("Enter a message: ");

	while(i < N && (ch = getchar()) != '\n') {
		sentence[i++] = ch;
	}

	while(i >= 0) {
		printf("%c", sentence[--i]);
	}

	printf("\n");

	return 0;
}

