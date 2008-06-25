#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define TRUE 1
#define FALSE 0

typedef int Bool;

Bool straight, flush, four, three;
int pairs;	 /* can be 0, 1, or 2 */

void read_cards(int cards[NUM_CARDS][2]);
void analyze_hand(int cards[NUM_CARDS][2]);
void print_result(void);

int main()
{
	int cards[NUM_CARDS][2];

	for (;;) {					/* infinite loop */
		read_cards(cards);
		analyze_hand(cards);
		print_result();
	}
}

void read_cards(int cards[NUM_CARDS][2])
{
	char ch, rank_ch, suit_ch;
	int rank, suit, x, y;
	Bool bad_card, duplicate_card;
	int cards_read = 0;

	for (x = 0; x < NUM_CARDS; x++)
		for (y = 0; y < 2; y++) 
			cards[x][y] = FALSE;

	while (cards_read < NUM_CARDS) {

		bad_card = FALSE;
		duplicate_card = FALSE;

		printf("Enter a card: ");

		rank_ch = getchar();
		switch (rank_ch) {
			case '0':					 exit(EXIT_SUCCESS);
			case '2':					 rank = 0; break;
			case '3':					 rank = 1; break;
			case '4':					 rank = 2; break;
			case '5':					 rank = 3; break;
			case '6':					 rank = 4; break;
			case '7':					 rank = 5; break;
			case '8':					 rank = 6; break;
			case '9':					 rank = 7; break;
			case 't': case 'T': rank = 8; break;
			case 'j': case 'J': rank = 9; break;
			case 'q': case 'Q': rank = 10; break;
			case 'k': case 'K': rank = 11; break;
			case 'a': case 'A': rank = 12; break;
			default:						bad_card = TRUE;
		}

		suit_ch = getchar();
		switch (suit_ch) {
			case 'c': case 'C': suit = 0; break;
			case 'd': case 'D': suit = 1; break;
			case 'h': case 'H': suit = 2; break;
			case 's': case 'S': suit = 3; break;
			default:						bad_card = TRUE;
		}

		while ((ch = getchar()) != '\n') {
			if (ch != ' ') bad_card = TRUE;
		}

		for (x = 0; x <= cards_read; x++) {
			for (y = 0; y < 2; y++) {
				if (cards[x][0] == rank && cards[x][1] == suit) {
					duplicate_card = TRUE;
					break;
				}
			}
		}

		if (bad_card) {
			printf("Bad card; ignored.\n");
		}	else if (duplicate_card) {
			printf("Duplicate card; ignored.\n");
		}	else {
			cards[cards_read][0] = rank;
			cards[cards_read][1] = suit;
			cards_read++;
		}
	}
}

void analyze_hand(int cards[NUM_CARDS][2])
{
	int num_consec = 0, lowest = 0;
	int suit, rank, num_in_rank, i;

	straight = FALSE;
	flush = TRUE;
	four = FALSE;
	three = FALSE;
	pairs = 0;

	/* check for flush */
	suit = cards[0][1];
	for (i = 1; i < NUM_CARDS; i++) {
		if(cards[i][1] != suit) {
			flush = FALSE;
			break;
		}
	}

	/* check for straight */
	for (i = 0; i < NUM_CARDS; i++) {
		if (cards[i][0] < cards[lowest][0]) {
			lowest = i;
		}
	}

	scan:
	for (i = 0; i < NUM_CARDS; i++) {
		if(cards[i][0] == cards[lowest][0] + 1) {
			num_consec++;
			lowest = i;
			goto scan;
		}
	}

	if (num_consec == NUM_CARDS - 1) {
		straight = TRUE;
		return;
	}

	/* check for 4-of-a-kind, 3-of-a-kind, and pairs */
	for (rank = 0; rank < NUM_RANKS; rank++) {
		num_in_rank = 0;
		for (i = 0; i < NUM_CARDS; i++) {
			if (cards[i][0] == rank) {
				num_in_rank++;
			}
		}
		if (num_in_rank) {
			if (num_in_rank == 4) four = TRUE;
			if (num_in_rank == 3) three = TRUE;
			if (num_in_rank == 2) pairs++;
		}
	}
}

void print_result(void)
{
	if (straight && flush)	printf("Straight flush\n\n");
	else if (four)					printf("Four of a kind\n\n");
	else if (three &&
					 pairs == 1)		printf("Full house\n\n");
	else if (flush)					printf("Flush\n\n");
	else if (straight)			printf("Straight\n\n");
	else if (three)					printf("Three of a kind\n\n");
	else if (pairs == 2)		printf("Two pairs\n\n");
	else if (pairs == 1)		printf("Pair\n\n");
	else										printf("High card\n\n");
}

