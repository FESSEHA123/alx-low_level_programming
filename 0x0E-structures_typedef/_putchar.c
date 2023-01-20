#include <unistd.h>

/**
 * _putchar : writes the character 
 * @c : the character
 *
 * Return : on sucess 1
 * on error: -1 is returned and error is set approximately
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
