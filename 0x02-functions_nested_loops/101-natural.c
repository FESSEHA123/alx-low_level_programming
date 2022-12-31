#include <stdio.h>
#include "main.h"

/**
 * 101_natural - prints the sum of all multiple of  3 or 5 up to 1024
 * return: always (sucess) 0.
 */
int 101_natural(void)
{
	int i, z = 0;

	while (i < 1024)
	{
	if ((i % 3 == 0) || (i % 5 == 0))
	{
	z += i;
	}
	i++;
	}
	printf("%d\n", z);
	return (0);
}
