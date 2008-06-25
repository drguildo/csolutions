#include <stdio.h>

void split_time(long int, int *, int *, int *);

int main() {
	long int total_seconds = 45080;
	int hours, minutes, seconds;

	split_time(total_seconds, &hours, &minutes, &seconds);
	printf("Hours: %d Minutes: %d Seconds: %d\n", hours, minutes, seconds);

	return 0;
}

void split_time(long int total_sec, int *hr, int *min, int *sec) {
	*hr = total_sec / 3600;
	*min = (total_sec % 3600) / 60;
	*sec = (total_sec % 3600) % 60;
}

