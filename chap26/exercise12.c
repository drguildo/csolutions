#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	unsigned month, day, year, offset;
	struct tm t;
	time_t tmp;

	printf("Date (mm/dd/yyyy): ");
	scanf("%u/%u/%u", &month, &day, &year);
	printf("Offset: ");
	scanf("%u", &offset);

	t.tm_mday = day + offset;
	t.tm_mon = month;
	t.tm_year = year - 1900;
	t.tm_sec = 0;
	t.tm_min = 0;
	t.tm_hour = 0;

	tmp = mktime(&t);

	printf("%s", ctime(&tmp));

	return 0;
}
