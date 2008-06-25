struct node *delete_from_list(struct node *list, int n)
{
    struct node *cur = list;

    if (cur->value == n) {
        list = list->next;
        free(cur);
        return list;
    }

    while (cur->next != NULL && cur->next->value != n) {
        cur = cur->next;
    }

    if (cur->next == NULL) {
        return list;
    }

    free(cur->next);
    cur->next = cur->next->next;
    return list;
}
