#include "main.h"
/**
 * _print_rev_recursion - print avskcjvcjkhcv bvskvcksnbbck string in reverse
 * @s: the string to reverse
 *
 * Return: nohing
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{return;
	}

	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}
