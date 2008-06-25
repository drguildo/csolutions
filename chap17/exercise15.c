int compare_parts(const void *p, const void *q)
{
    struct part *p1 = p;
    struct part *q1 = q;

    if (p1->number < q1->number)
        return 1;
    else if (p1->number == q1->number)
        return 0;
    else
        return -1;
}
