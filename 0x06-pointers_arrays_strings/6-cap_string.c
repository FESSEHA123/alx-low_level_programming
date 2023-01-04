#include "main.h"

/**
 * cap_string  - captionalize all word ofas tring
 * @str: the sbting o fchaperhlixe
 * Return: a poinetr too the  chjanged
 */
char *cap_string(char *str)

{
	int index = 0;

	while (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
		index++;
		if (str[index - 1] == ' ' ||
		str[index - 1] == '\t' ||
		str[index - 1] == '\t' ||
		str[index - 1] == ',' ||
		str[index - 1] == ';' ||
		str[index - 1] == '.' ||
		str[index - 1] == '!' ||
		str[index - 1] == '?' ||
		str[index - 1] == '"' ||
		str[index - 1] == '(' ||
		str[index - 1] == ')' ||
		str[index - 1] == '{' ||
		str[index - 1] == '}' ||
		index == 0)
		str[index] -= 32;
		index++;
	}
	return (str);
}
