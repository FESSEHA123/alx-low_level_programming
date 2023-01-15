#include "main.h"
/**
 * _pow_recursion - return thr value of x
 * @x: the value of x
 * @y: the times
 *
 * Return: the value
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}
