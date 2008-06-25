#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

int main() {
	char new_word[WORD_LEN+1];
	char smallest[WORD_LEN+1] = "";
	char largest[WORD_LEN+1] = "";

	for(;;) {
		printf("Enter word: ");
		scanf("%20s", new_word);
		if(strcmp(smallest, new_word) >= 0 || smallest[0] == '\0') {
			strcpy(smallest, new_word);
		}
		if(strcmp(largest, new_word) <= 0) {
			strcpy(largest, new_word);
		}
		if(strlen(new_word) == 4) {
			break;
		}
	}

	printf("Smallest word: %s\n", smallest);
	printf("Largest word: %s\n", largest);

	return 0;
}

