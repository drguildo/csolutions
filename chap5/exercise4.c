#include <stdio.h>

int main() {
	int i = 5;
	int j = 4;

	/* this was very difficult. */
	printf("%d\n", (i < j) ? -1 : ((i > j) ? 1 : 0 ));

	return 0;
}

