/* problem: p is freed so that p->next doesn't exist
 * in the next iteration. fixed version follows. */

struct node *p, *next;

for (p = first; p != NULL; p = next) {
    next = p->next;
    free(p);
}
