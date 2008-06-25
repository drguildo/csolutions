void delete_from_list(struct node **list, int n)
{
    /*
     * list = pointer to pointer to object
     * *list = pointer to object
     * **list = object
     */

    struct node *cur = *list, *prev = NULL;

    while (cur != NULL && cur->value != n) {
         prev = cur;
         cur = cur->next;
    }

    if (cur == NULL)
        return;
    if (prev == NULL)
        *list = (*list)->next;
    else
        prev->next = cur->next;
    free(cur);
}
