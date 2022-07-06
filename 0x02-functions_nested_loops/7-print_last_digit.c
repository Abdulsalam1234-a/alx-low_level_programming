#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - printing of the last digit
 * @n: parameter to check
 * Return: a
*/
int print_last_digit(int n)
{
	int a;

	if (n < 0)
		n = -n;
	a = n % 10;

	if (a < 0)
	{
		a = -a;
	}
	_putchar(a + '0');

	return (a);
}

