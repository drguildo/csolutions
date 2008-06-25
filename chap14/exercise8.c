#include <stdio.h>

#define GENERIC_MAX(type) \
type type##_max(type x, type y) \
{ \
	return x > y ? x : y; \
}

typedef unsigned long ulong;

int main() {
	return 0;
}

long long_max(long x, long y)
{
	return x > y ? x : y;
}

GENERIC_MAX(ulong)
