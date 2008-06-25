#include <ctype.h>
#include <stdio.h>

int isidentifier(const char *);

int main(void) {
	char *foo[] = {"blah", "_blah", "1blah", " blah"};
	int i;

	for (i = 0; i < sizeof(foo) / sizeof(foo[0]); i++) {
		printf("\"%s\" is %s valid identifier.\n", foo[i],
		    isidentifier(foo[i]) ? "a" : "not a" );
	}

	return 0;
}

int isidentifier(const char *s) {
	if (isalpha(*s) || *s == '_') {
		do {
			s++;
		} while(isalnum(*s));
	} else {
		return 0;
	}

	if (*s)
		return 0;
	else
		return 1;
}
