#include <stdio.h>

int main() {
	int i, x, values[5][5] = {{0}}, rowsum[5] = {0}, columnsum[5] = {0};

	for(i = 0; i < 5; i++) {
		printf("Enter row %d: ", i + 1);
		for(x = 0; x < 5; x++)
			scanf("%d", &values[i][x]);
	}

	for(i = 0; i < 5; i++) {
		for(x = 0; x < 5; x++) {
			rowsum[i] += values[i][x];
			columnsum[x] += values[i][x];
		}
	}

	printf("Row totals: ");
	for(i = 0; i < 5; i++)
		printf("%4d", rowsum[i]);
	printf("\n");

	printf("Column totals: ");
	for(i = 0; i < 5; i++)
		printf("%4d", columnsum[i]);
	printf("\n");

	return 0;
}

