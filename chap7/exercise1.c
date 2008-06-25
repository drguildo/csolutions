#include <stdio.h>

int main() {
	printf("077 = %d\n", 077); /* 7 * 8^1 + 7 * 8^0 = 63 */
	printf("0x77 = %d\n", 0x77); /* 7 * 16^1 + 7 * 16^0 = 119 */
	printf("0xABC = %d\n", 0xABC); /* 10 * 16^2 + 11 * 16^1 + 12 * 16^13 = 2748 */

	return 0;
}

