#include "main.h"
#include <unistd.h>

/**
 * *_putchar - writes the characte
 * @c: the charcte
 *
 * Return: on sucess 1.
 *on error, -1 is returned, and errno is set appropriatly.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
