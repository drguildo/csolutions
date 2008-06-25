#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {
	char ch, *str = NULL, **tokens = NULL;
	int i = 0, strsize = 0, numtokens = 10;

	printf("Enter a space-seperated list of words: ");

	do {
		ch = getchar();
		if (i == strsize) {
			strsize += 10;
			str = realloc(str, sizeof(char) * strsize);
		}
		str[i++] = ch;
	} while(isprint(ch));

	str[i-1] = '\0'; /* we don't want the newline */

	i = 0;

	tokens = malloc(sizeof(char *) * numtokens);
	tokens[i] = strtok(str, " ");

	while (tokens[i++] != NULL) {
		if (i == numtokens) {
			numtokens += 10;
			tokens = realloc(tokens, sizeof(char *) * numtokens);
		}
		tokens[i] = strtok(NULL, " ");
	}

	i--;

	while (i-- > 0) {
		printf("%s\n", tokens[i]);
	}

	return 0;
}
