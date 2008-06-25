#include <stdio.h>


int main(void) {
    char c[2] = { 'X', 'X' };

    scanf(" %c", c);
    printf("%c %d\n", c[0], c[1]);
    scanf("%1s", c);
    printf("%c %d\n", c[0], c[1]); /* Note how the second 'X' is replaced
                                      with \0 */

    return 0;
}
