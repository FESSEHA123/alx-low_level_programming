#include <stdio.h>
/**
 * _puts -prints
 * @str: the string
 * Return: void
 */
voids _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
	_putchar(*str);
	}
	_putchar('\n');
}
