#include <stdio.h>

int main() {
	/* - (minus) represents a space character */
	printf("(a) %6d,%4d\n", 86, 1040); /* ----86,1040 */
	printf("(b) %12.5e\n", 30.253); /* -3.02530e+1 */
	printf("(c) %.4f\n", 83.162); /* 83.1620 */
	printf("(d) %-6.2g\n", .0000009979); /* 1e-06 */

	return 0;
}

