#include <stdio.h>

#define N 10

int main() {
	float ident[N][N];
	float *p;
	int count = N;
	int row, col;

	for (p = &ident[0][0]; p <= &ident[N - 1][N - 1]; p++) {
		if (count == N) {
			*p = 1.0;
			count = 0;
		} else {
			*p = 0.0;
			count++;
		}
	}

	for(row = 0; row < N; row++) {
		for(col = 0; col < N; col++) {
			printf(" %g", ident[row][col]);
		}
		printf("\n");
	}

	return 0;
}

