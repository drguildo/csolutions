#include <stdio.h>

int main() {
	int i;

	for(i = 0; i <= 10; ++i) {
		if(i == 5)
			goto done;
		printf("%d\n", i);
		done:
			; /* null statements aren't covered until the section after the one
					 that discusses goto, but gcc bitches if you put a label at
					 the end of a compound statement */
	}

	return 0;
}

