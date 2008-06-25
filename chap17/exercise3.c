#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 20
#define MAX_WORD_LEN 20

int check_duplicate(const char *);
int compare_words(const void *, const void *);
void read_word(int);

char word[MAX_WORD_LEN+1], *words[MAX_WORDS];
int num_words = 0;

int main(void) {
    int i;

    puts("Please enter a space seperated list of words");
    printf("> ");

    read_word(MAX_WORD_LEN);
    while (strcmp(word, "") != 0 && num_words < MAX_WORDS) {
        printf("adding %s... ", word);
        if (check_duplicate(word) == -1) {
            puts("skipping duplicate.");
            read_word(MAX_WORD_LEN);
            continue;
        }
        words[num_words] = malloc(strlen(word) + 1);
        if (words[num_words] == NULL) {
            puts("error: malloc() failed.");
            break;
        }
        strcpy(words[num_words++], word);
        puts("added.");
        read_word(MAX_WORD_LEN);
    }

    qsort(words, num_words, sizeof(char *), compare_words);

    puts("\n-- Sorted List --\n");
    for (i = 0; i < num_words; i++) {
        printf("%s\n", words[i]);
    }

    return 0;
}

int check_duplicate(const char *word) {
    int i;

    for (i = 0; i < num_words; i++) {
        if (strcmp(words[i], word) == 0) {
            return -1;
        }
    }

    return 0;
}

int compare_words(const void *word1, const void *word2) {
    return strcmp(*(char **)word1, *(char **)word2);
}

void read_word(int max) {
    int ch, i = 0;

    while ((ch = getchar()) == ' ') {
    }

    while (ch != EOF && ch != '\n' && ch != ' ') {
        if (i < MAX_WORD_LEN) {
            word[i++] = ch;
        }
        ch = getchar();
    }

    ungetc(ch, stdin);

    word[i] = '\0';
}
