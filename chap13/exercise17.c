#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13
#define TRUE 1
#define FALSE 0

typedef int Bool;

main()
{
	Bool in_hand[NUM_SUITS][NUM_RANKS] = {{0}};
	int num_cards, rank, suit;
	const char *rank_code[] = { "two", "three", "four", "five", "six",
														"seven", "eight", "nine", "ten", "jack",
														"queen", "king", "ace" };
	const char *suit_code[] = { "clubs", "diamonds", "hearts", "spades" };

	srand((unsigned) time(NULL));

	printf("Enter number of cards in hand: ");
	scanf("%d", &num_cards);

	printf("Your hand:\n");
	while (num_cards > 0) {
		suit = rand() % NUM_SUITS;		/* picks a random suit */
		rank = rand() % NUM_RANKS;		/* picks a random rank */
		if (!in_hand[suit][rank]) {
			in_hand[suit][rank] = TRUE;
			num_cards--;
			printf(" %s of %s\n", rank_code[rank], suit_code[suit]);
		}
	}

	return 0;
}

