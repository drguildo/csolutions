/*
 * The error is that has_zero will always return during the
 * first itteration of the for loop. It'll return TRUE if a[0]
 * is 0, or FALSE otherwise. The fix is to get rid of the else
 * statement.
 */

Bool has_zero(int a[], int n)
{
	int i;

	for (i = 0; i < n; i++)
		if(a[i] == 0)
			return TRUE;

	return FALSE;
}

