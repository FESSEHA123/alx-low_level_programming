#include "main.h"
/**
 * _strncat - concatinate
 * @dest:the string to be 
 * @src:the string to be appread
 * @n:the number of bytes 
 * Return: Apointer to the resulting
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
	dest_len++;
	for (index = 0; src[index] && index < n; index++)
	dest[dest_len++] = src[index];
	return (dest);
}
