#include "main.h"
/**
 * _pow_recursion - return the power of x to y
 * @x: base
 * @y: power
 * Return: 1 or 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
