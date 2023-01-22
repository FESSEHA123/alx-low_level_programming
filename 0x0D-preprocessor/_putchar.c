#include <unistd.h>

/**
 * _putchar: write the character c to stdout
 * @.: thr character to prnt
 *
 * Return: on sucess 1
 * on error, -1 is returned ms cn
 */
 
 int _putchar(char c)
{
	return (write(1, &c, 1))
}
