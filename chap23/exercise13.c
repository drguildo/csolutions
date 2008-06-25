#include <ctype.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *strdup(const char *);
int stricmp(const char *, const char *);
char *strlwr(char *);
char *strrev(char *);
char *strset(char *, char);

int main(void) {
	char *s1 = "FooBarBaz", *s2;

	if ((s2 = strdup(s1)) != NULL) {
		printf("%s\n", s2);
	}

	strlwr(s2);
	printf("%s\n", s2);

	if (stricmp(s1, s2)) {
		puts("s1 != s2");
	}

	strrev(s2);
	printf("%s\n", s2);

	strset(s2, '!');
	printf("%s\n", s2);

	return 0;
}

char *strdup(const char *s) {
	char *copy;

	copy = malloc(sizeof(char) * (strlen(s) + 1));

	if (copy != NULL) {
		strcpy(copy, s);
	}

	return copy;
}

int stricmp(const char *s1, const char *s2) {
	while (tolower(*s1) == tolower(*s2)) {
		if (*s1 == '\0') {
			return 0;
		}
		s1++;
		s2++;
	}

	return *s1 - *s2;
}

char *strlwr(char *s) {
	while (*s != '\0') {
		*s = tolower(*s);
		s++;
	}

	return s;
}

char *strrev(char *s) {
	char ch;
	int start = 0, end = strlen(s) - 1;

	while (start != end) {
		ch = s[start];
		s[start++] = s[end];
		s[end--] = ch;
	}

	return s;
}

char *strset(char *s, char ch) {
	memset(s, ch, strlen(s));

	return s;
}
