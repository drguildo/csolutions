#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

static int count = 0;

void handler(int);

int main(void) {
	signal(SIGINT, handler);

	while (1) {
		puts("Raising SIGINT...");
		raise(SIGINT);
	}

	return 0;
}

void handler(int sig) {
	if (++count == 3) {
		exit(EXIT_FAILURE);
	}

	return;
}
