#include <stdio.h>

int main() {
	int i, x, total, highscore, lowscore;
	int scores[5][5] = {{0}};

	for(i = 0; i < 5; i++) {
		printf("Enter student %d's scores: ", i + 1);
		for(x = 0; x < 5; x++)
			scanf("%d", &scores[i][x]);
	}

	printf("\n");

	for(i = 0; i < 5; i++) {
		total = 0;
		for(x = 0; x < 5; x++) {
			total += scores[i][x];
		}
		printf("Student %d total: %d\n", i + 1, total);
		printf("Student %d average: %d\n", i + 1, total / 5);
	}

	printf("\n");

	for(i = 0; i < 5; i++) {
		total = 0;
		lowscore = 0;
		highscore = 0;
		for(x = 0; x < 5; x++) {
			total += scores[x][i];
			if(x == 0) {
				lowscore = scores[x][i];
				highscore = scores[x][i];
			} else {
				if(scores[x][i] < lowscore)
					lowscore = scores[x][i];
				else
					if(scores[x][i] > highscore)
						highscore = scores[x][i];
			}
		}
		printf("Quiz %d average: %d\n", i + 1, total / 5);
		printf("Quiz %d low score: %d\n", i + 1, lowscore);
		printf("Quiz %d high score: %d\n", i + 1, highscore);
	}

	return 0;
}

