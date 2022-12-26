#include <stdio.h>
/**
 * main - writes  the character c tostdout
 * @c: the charcter to print
 * Return: on sucess 1:
 * on error, -1 is returned, and errno is set appropraitly.
 */
int _putchar(char c)
{
	return (fwrite(1, &c, 1));
}
