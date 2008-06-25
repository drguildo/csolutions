#include <stdio.h>

#define M 10

int main() {
#if M
	printf("#if M = true\n"); /* 1 */
#endif
#ifdef M
	printf("#ifdef M = true\n"); /* 1 */
#endif
#ifndef M
	printf("#ifndef M = true\n"); /* 0 */
#endif
#if defined(M)
	printf("#if defined(M) = true\n"); /* 1 */
#endif
#if !defined(M)
	printf("#if M = true\n"); /* 0 */
#endif
	return 0;
}

