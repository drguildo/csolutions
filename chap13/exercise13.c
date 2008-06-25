#include <stdio.h>

int strcmp(char *, char *);

int main() {
	printf("%d\n", strcmp("wank", "wanky"));
	return 0;
}

int strcmp(char *s, char *t)
{
	while (*s == *t) {
		if (*s == '\0')
			return 0;
		s++;
		t++;
	}
	return *s - *t;
}

