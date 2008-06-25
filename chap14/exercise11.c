#include <stdio.h>

void f(void);

main()
{
	f();
	return 0;
}

void f(void)
{
	printf("N is undefined\n");
}

