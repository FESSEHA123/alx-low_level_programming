#include <stdio.h>

/**
 * main - print the number in base 36
 * Return: Always 0
 */
in main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');
	for (la = 'a'; la <= 'f'; la++)
		putchar(la);

	putcahr('\n');

	return (0);
}
