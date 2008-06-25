#include <stdio.h>
#include "word.h"

int read_char(void)
{
  int ch = getchar();

  if (ch == '\n' || ch == '\t')
    return ' ';

  return ch;
}

void read_word(char *word, int len)
{
  int ch, pos = 0;
  while ((ch = read_char()) == ' ')
    ;

  while (ch != ' ' && ch != EOF) {
    if (pos < len)
      word[pos++] = ch;
    ch = read_char();
  }

  /* recompiled: fmt.c, word.c word.h line.h */

  if (pos == len)
    word[pos-1] = '*';

  word[pos] = '\0';
}