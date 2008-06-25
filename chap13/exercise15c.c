#include <stdio.h>
#include <string.h>

#define MAX_REMIND 50
#define MSG_LEN 60

int read_line(char str[], int n);

main()
{
	char reminders[MAX_REMIND][MSG_LEN+3];
	char month_str[3], day_str[3], time_str[6], date_str[12], msg_str[MSG_LEN+1];
	int month, day, hours, minutes, i, j, num_remind = 0;

	for (;;) {
		hours = 0;
		minutes = 0;

		if (num_remind == MAX_REMIND) {
			printf("-- No space left --\n");
			break;
		}

		printf("Enter month, day, time and reminder: ");
		scanf("%2d", &month);
		if (month == 0)
			break;
		scanf("/%2d", &day);
		scanf("%2d:%2d", &hours, &minutes);

		sprintf(month_str, "%2d", month);
		sprintf(day_str, "%2d", day);
		sprintf(time_str, "%.2d:%.2d", hours, minutes);

		read_line(msg_str, MSG_LEN);

		if (month < 1 || month > 12) {
			printf("-- Invalid month --\n");
			continue;
		}

		if (day < 0 || day > 31) {
			printf("-- Invalid day --\n");
			continue;
		}

		if (hours < 0 || hours > 23 || minutes < 0 || minutes > 59) {
			printf("-- Invalid time --\n");
			continue;
		}

		strcpy(date_str, day_str);
		strcat(date_str, " ");
		strcat(date_str, time_str);

		for (i = 0; i < num_remind; i++)
			if (strcmp(date_str, reminders[i]) < 0)
				break;
		for (j = num_remind; j > i; j--)
			strcpy(reminders[j], reminders[j-1]);

		strcpy(reminders[i], date_str);
		strcat(reminders[i], " ");
		strcat(reminders[i], msg_str);

		num_remind++;
	}

	printf("\nMonth/Day Time  Reminder\n");
	for (i = 0; i < num_remind; i++)
		printf(" %s\n", reminders[i]);

	return 0;
}

int read_line(char str[], int n) {
	char ch;
	int i = 0;

	while((ch = getchar()) == ' ')
		;

	do {
		if (i < n)
			str[i++] = ch;
	} while ((ch = getchar()) != '\n');

	str[i] = '\0';
	return i;
}

