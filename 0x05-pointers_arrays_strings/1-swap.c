#include <stdio.h>
/**
 * swap_int -swap the values of two intigers
 * @a: 1st iniger
 * @b: the 2nd
 * Return : nothing
 */
void swap_int(int *a, int *b)
/*the function that swaps the values of two intigers . */
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
