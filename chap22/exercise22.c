#include <stdio.h>

#define RECORD_SIZE 64L

int main(void) {
    FILE *fp = fopen("foo", "rb");
    int n = 0;

    fseek(fp, n * RECORD_SIZE, SEEK_SET);
    fseek(fp, -1 *RECORD_SIZE, SEEK_END);
    fseek(fp, RECORD_SIZE, SEEK_CUR);
    fseek(fp, -2 * RECORD_SIZE, SEEK_CUR);

    fclose(fp);

    return 0;
}
