#include <stdio.h>
#include <string.h>

#define COUNTRY_NAME_LENGTH 20
#define NUMBER_OF_COUNTRIES 29

void read_line(char *, int);

int main(void) {
    struct dialing_code {
        char *country;
        int code;
    };

    const struct dialing_code country_codes[] = {
        {"Argentinga",          54}, {"Bangladesh",  880},
        {"Brazil",              55}, {"China",        86},
        {"Colombia",            57}, {"Egypt",        20},
        {"Ethiopia",           251}, {"France",       33},
        {"Germany",             49}, {"India",        91},
        {"Indonesia",           62}, {"Iran",         98},
        {"Italy",               39}, {"Japan",        81},
        {"Korea, Republic of",  82}, {"Mexico",       52},
        {"Nigeria",            234}, {"Pakistan",     92},
        {"Philippines",         63}, {"Poland",       48},
        {"Russia",               7}, {"South Africa", 27},
        {"Spain",               34}, {"Thailand",     66},
        {"Turkey",              90}, {"Ukraine",       7},
        {"United Kingdom",      44}, {"Vietnam",      84},
        {"Zaire",              243}
    };
    int i;

    char country_name[COUNTRY_NAME_LENGTH];

    printf("Enter a country name: ");
    read_line(country_name, COUNTRY_NAME_LENGTH-1);

    for(i = 0; i < NUMBER_OF_COUNTRIES; i++) {
        if(strcmp(country_name, country_codes[i].country) == 0) {
            printf("Dialing code: %d\n", country_codes[i].code);
            return 0;
        }
    }

    printf("Unknown country.\n");
    return -1;
}

void read_line(char *buffer, const int length) {
    int ch, i = 0;

    while((ch = getchar()) != EOF && ch != '\n') {
        if(i < length) buffer[i++] = ch;
    }

    buffer[i] = '\0';
}
