#include <stdio.h>

int main() {
	char current, next;
	int checksum = 0;

	printf("Enter ticket number: ");

	current = getchar();

	while((next = getchar())) {
		current -= '0';

		if(next == '\n')
			break;

		checksum *= 10;
		checksum += current;
		checksum = checksum % 7;

		current = next;
	}

	if(current == checksum)
		printf("VALID\n");
	else
		printf("INVALID\n");

	return 0;
}

