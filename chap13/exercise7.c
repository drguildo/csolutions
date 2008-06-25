#include <stdio.h>

main()
{
	char s[] = "Hsjodi", *p;

	for (p = &s[5]; p >= s; p--) --*p;
	puts(s); /* Grinch */
	return 0;
}

