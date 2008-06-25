#include <stdio.h>
#include <stdlib.h>
#include <time.h>

time_t year_beginning(unsigned);

int main(void) {
	time_t t = year_beginning(2020);
	printf("%s", ctime(&t));
	return 0;
}

time_t year_beginning(unsigned year) {
	struct tm t;

	t.tm_sec = 0;
	t.tm_min = 0;
	t.tm_hour = 0;
	t.tm_mday = 1;
	t.tm_mon = 0;
	t.tm_year = year - 1900;
	t.tm_wday = 0;
	t.tm_yday = 0;

	return mktime(&t);
}
