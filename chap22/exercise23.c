#include <assert.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    const char *months[] = {
        "Invalid", "January", "February", "March", "April", "May", "June",
        "July", "August", "September", "October", "November", "December"
    };
    int day, month, year;

    if (argc != 2) {
        fprintf(stderr, "usage: %s date\n", argv[0]);
        exit(EXIT_FAILURE);
    }

    if (sscanf(argv[1], "%d%*[-/]%d%*[-/]%d", &month, &day, &year) != 3) {
        fprintf(stderr, "Invalid date.\n");
        exit(EXIT_FAILURE);
    }

    if (month < 1 || month > (sizeof(months) / sizeof(months[0]))) {
        fprintf(stderr, "Invalid month.\n");
        exit(EXIT_FAILURE);
    }

    if (day < 1 || day > 31) {
        fprintf(stderr, "Invalid day.\n");
        exit(EXIT_FAILURE);
    }

    if (year < 0 || year > 99) {
        fprintf(stderr, "Invalid year.\n");
        exit(EXIT_FAILURE);
    }

    printf("%s %d, %d\n", months[month], day,
        year < 6 ? 2000 + year : 1900 + year );

    return 0;
}
