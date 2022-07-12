#include <stdio.h>
#include "main.h"

/**
 * print_rev - a function that prints strings in reverse
 * @s: parameter to the function
*/
void print_rev(char *s)
{
	int length;

	for (length = length - 1; length >= 0; length--)
		_putchar(s[length]);
	_putchar('\n');
}
