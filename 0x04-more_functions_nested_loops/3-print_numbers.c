#include "main.h"

/**
 * print_numbers - print numm from 0 - 9
 * Return: the number since 0 - 9
 */
void print_numbers(void)
{
	int x;

	for (x = '0'; x <= '9'; x++)
	{
	_putchar(x);
	}
	_putchar('\n');
}
