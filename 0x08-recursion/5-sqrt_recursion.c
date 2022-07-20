#include "main.h"
/**
 * find_root - finding the root of a number
 * @n: the base
 * @i: the root
 * Return: -1
 */
int find_root(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i <= n)
		return (find_root(n, i + 1));
	else
		return (-1);
}

/**
 * _sqrt_recursion - find the square root of the base
 * @n: number
 * Return: root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0 || n == 1)
		return (n);
	return (find_root(n, 2));
}
