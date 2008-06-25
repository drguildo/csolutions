#include <stdio.h>

int f1(int (*f)(int));
int f2(int i);

main()
{
    printf("Answer: %d\n", f1(f2)); /* 3 * 3 + 3 - 12 = 0. Answer: 3. */
    return 0;
}

int f1(int (*f)(int))
{
    int n = 0;

    while ((*f)(n)) n++;
    return n;
}

int f2(int i)
{
    return i * i + i - 12;
}
