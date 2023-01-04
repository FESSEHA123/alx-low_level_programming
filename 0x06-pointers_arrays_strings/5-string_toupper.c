#include "main.h"

/**
 * string_toupper - chages all lower case letter
 * of string to upper case
 * @str: the string to be chaged
 * Return: a poinetr to the change
 *
 */
char *string_toupper(char *str)
{
	int index = 0;

	while (str[index])
	{
	if (str[index] >= 'a' && str[index] <= 'z')
	str[index] -= 32;
	index++;
	}
	return (str);
}
