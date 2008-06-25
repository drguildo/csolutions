#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i, n, x = 0, y = 0, direction;
	char maze[10][10], ch = 'A';

	srand((unsigned) time(NULL));

	for(i = 0; i < 10; i++)
		for(n = 0; n < 10; n++)
			maze[i][n] = '.';

	maze[x][y] = ch;
	++ch;

	while(ch <= 'Z') {
		direction = rand() % 4;
		if((y > 0 && maze[x][y - 1] == '.') || (x < 9 && maze[x + 1][y] == '.') || (y < 9 && maze[x][y + 1] == '.') || (x > 0 && maze[x - 1][y] == '.')) {
			if(direction == 0) {
				if(y - 1 < 0 || maze[x][y - 1] != '.') {
					continue;
				}	else {
					--y;
					maze[x][y] = ch;
				}
			} else if(direction == 1) {
				if(x + 1 > 9 || maze[x + 1][y] != '.') {
					continue;
				}	else {
					++x;
					maze[x][y] = ch;
				}
			} else if(direction == 2) {
				if(y + 1 > 9 || maze[x][y + 1] != '.') {
					continue;
				} else {
					++y;
					maze[x][y] = ch;
				}
			} else if(direction == 3) {
				if(x - 1 < 0 || maze[x - 1][y] != '.') {
					continue;
				} else {
					--x;
					maze[x][y] = ch;
				}
			}
		} else
			break;
		ch++;
	}

	for(i = 0; i < 10; i++) {
		for(n = 0; n < 10; n++)
			printf(" %c", maze[i][n]);
		printf("\n");
	}

	return 0;
}

