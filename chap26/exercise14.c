#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
	char str[64];
	struct tm *ptr;
	time_t curtime = time(NULL);

	strftime(str, sizeof(str), "%A, %B %d, %Y  %I:%M", localtime(&curtime));
	ptr = localtime(&curtime);
	printf("%s%c\n", str, ptr->tm_hour <= 11 ? 'a' : 'p');

	strftime(str, sizeof(str), "%a, %d %b %y  %H:%M", localtime(&curtime));
	printf("%s\n", str);

	strftime(str, sizeof(str), "%m/%d/%y  %X %p", localtime(&curtime));
	printf("%s\n", str);

	return 0;
}
