#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int count = 0, sum = 0;

	while(count < argc)
		sum += atoi(argv[count++]);

	printf("Total: %d\n", sum);

	return 0;
}

