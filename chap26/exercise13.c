#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	double diff;
	unsigned month, day, year;
	struct tm t1, t2;
	time_t tmp1, tmp2;

	printf("Date 1 (mm/dd/yyyy): ");
	scanf("%u/%u/%u", &month, &day, &year);

	t1.tm_mday = day;
	t1.tm_mon = month;
	t1.tm_year = year - 1900;
	t1.tm_sec = 0;
	t1.tm_min = 0;
	t1.tm_hour = 0;

	printf("Date 2 (mm/dd/yyyy): ");
	scanf("%u/%u/%u", &month, &day, &year);

	t2.tm_mday = day;
	t2.tm_mon = month;
	t2.tm_year = year - 1900;
	t2.tm_sec = 0;
	t2.tm_min = 0;
	t2.tm_hour = 0;

	tmp1 = mktime(&t1);
	tmp2 = mktime(&t2);

	diff = difftime(tmp2, tmp1);

	printf("Days difference: %g\n", diff / 60 / 60 / 24);

	return 0;
}
