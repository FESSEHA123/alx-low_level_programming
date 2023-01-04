#include "main.h"

/**
 * _strcmp - compares pointers to
 * @s1: a pointer to the first string
 * @s2: a pointer to the second string
 * Return: if str1 < str2 the negative difference of the
 * If str1 == str2, 0.
 * If str1 > str2, the posetive difference of the firist
 *
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 &&  *s2 && *s1 == *s2)
	{
	s1++;
	s2++;
	}
	return (*s1 - *s2);
}
