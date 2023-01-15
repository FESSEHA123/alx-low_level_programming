#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: size of memo
 * Return: pointer to alloctaed
 */
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);
}
