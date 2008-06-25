#include <stdio.h>

#define N 100

int main() {
	char sentence[N], ch;
	char *x, *y;

	printf("Enter a message: ");

	x = sentence;
	while(x < &sentence[N] && (ch = getchar()) != '\n') {
		if(ch >= 'A' && ch <= 'Z') {
			ch += 'a' - 'A';
		}
		if((ch >= 'a' && ch <= 'z')) {
			*x++ = ch;
		}
	}

	x--;
	y = sentence;
	while(x > y) {
		if(*y++ != *x--) {
			printf("Not a palindrome\n");
			return -1;
		}
	}

	printf("Palindrome\n");
	return 0;
}

