#include <ctype.h>
#include <stdio.h>

int read_line_a(char str[], int n);
int read_line_b(char str[], int n);
int read_line_c(char str[], int n);
int read_line_d(char str[], int n);

int main() {
	char str[12];

	read_line_a(str, 12);
	puts(str);

	return 0;
}

int read_line_a(char str[], int n) {
	char ch;
	int i = 0;

	while((ch = getchar()) == ' ')
		;

	do {
		if (i < n)
			str[i++] = ch;
	} while ((ch = getchar()) != '\n');

	str[i] = '\0';
	return i;
}

int read_line_b(char str[], int n) {
	char ch;
	int i = 0;

	while (!isspace(ch = getchar()))
		if (i < n)
			str[i++] = ch;

	str[i] = '\0';
	return i;
}

int read_line_c(char str[], int n) {
	char ch;
	int i = 0;

	do {
		ch = getchar();
		if (i < n)
			str[i++] = ch;
	} while(ch != '\n');

	str[i] = '\0';
	return i;
}

int read_line_d(char str[], int n) {
	char ch;
	int i = 0;

	while ((ch = getchar()) != '\n')
		if (i < n)
			str[i++] = ch;
		else
			break;

	str[i] = '\0';
	return i;
}

