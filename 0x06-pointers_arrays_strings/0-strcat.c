#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatination of two string
 * @dest: the concatinate string
 * @src: the ource string
 * Return: a pointer to the result string dest
 */
char *_strcat(char *dest, char *src)
{

	int dlen = 0, i;

	while (dest[dlen])
	{
	dlen++;
	}
	for (i = 0; src[i] != 0; i++)
	{
	dest[dlen] = src[i];
	dlen++;
	}
	dest[dlen] = '\0';
	return (dest);
}
