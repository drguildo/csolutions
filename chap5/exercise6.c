#include <stdio.h>

int main() {
	int hours, minutes;

	printf("Enter a 24-hour time: ");
	scanf("%d:%d", &hours, &minutes);

	if(hours == 24)
		printf("Equivalent 12-hour time: 00:00 AM\n");
	else
		if(hours >= 12)
			printf("Equivalent 12-hour time: %d:%.2d PM\n", hours == 12 ? hours : hours - 12, minutes);
		else
			if(hours < 12)
				printf("Equivalent 12-hour time: %d:%.2d AM\n", hours, minutes);

	return 0;
}

