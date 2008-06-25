struct {
    union {
        char a, b;
        int c;
    } d;
    int e[5];
} f, *p = &f;

int main(void) {
    p->b = ' ';     /* invalid. should be p->d.b = ' ' */
    p->e[3] = 10;   /* valid */
    (*p).d.a = '*'; /* valid */
    p->d->c = 20;   /* invalid. should be p->d.c = 20 */

    return 0;
}
