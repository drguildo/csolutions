#include <stdio.h>

int i = -1;

/*
* it looks like the sign is considered part of the output
* in the second format string.
*/
int main(void) {
    printf("%.4d\n", i); /* -0001 */
    printf("%04d\n", i); /* -001  */
    return 0;
}
