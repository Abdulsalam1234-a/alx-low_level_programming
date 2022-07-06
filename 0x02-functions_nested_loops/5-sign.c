#include "main.h"
/**
 * print_sign - print the sign of numbers
 * @n: the parameter to check
 * Return: 0 at last
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

