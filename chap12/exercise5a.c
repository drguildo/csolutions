#include <stdio.h>

#define N 100

int main() {
	char sentence[N], ch;
	int x, y;

	printf("Enter a message: ");

	x = 0;
	while(x < N && (ch = getchar()) != '\n') {
		if(ch >= 'A' && ch <= 'Z') {
			ch += 'a' - 'A';
		}
		if((ch >= 'a' && ch <= 'z')) {
			sentence[x++] = ch;
		}
	}

	y = -1;
	while(x > y) {
		if(sentence[++y] != sentence[--x]) {
			printf("Not a palindrome\n");
			return -1;
		}
	}

	printf("Palindrome\n");
	return 0;
}

