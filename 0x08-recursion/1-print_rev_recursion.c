#include "main.h"
/**
 * _print_rev_recursion - prints the reverse version of a string
 * @s: string to reverse
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
