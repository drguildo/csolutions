#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void roll(void);

int d1, d2;

int main(void) {
	int sum, play_again = 0;

	srand(time(NULL));

	do {
		roll();
		sum = d1 + d2;
		if (sum == 7 || sum == 11)
			puts("Player wins");
		else if (sum == 2 || sum == 3 || sum == 12)
			puts("Player loses");
		else
			for (;;) {
				roll();
				if (d1 + d2 == sum) {
					puts("Player wins");
					break;
				}
				if (d1 + d2 == 7) {
					puts("Player loses");
					break;
				}
			}
		printf("Play again? ");
		if (tolower(getchar()) == 'y')
			play_again = 1;
		else
			play_again = 0;
		while (getchar() != '\n')
			;
	} while(play_again);

	return 0;
}

void roll(void) {
	d1 = (rand() % 6) + 1;
	d2 = (rand() % 6) + 1;
	printf("d1: %d d2: %d\n", d1, d2);
}
