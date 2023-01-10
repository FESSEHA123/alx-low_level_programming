#include "main.h"

/**
 * _memeset - entry point
 * @s: pointed destintion
 * @b: cinstant byte
 * @n: bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n, i++)
		s[i] = b;
	return (s);
}
