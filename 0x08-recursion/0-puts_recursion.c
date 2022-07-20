#include "main.h"
/**
 * _puts_recursion - prints a string followed by a newline
 * @s: pointer to the sting
 */
void _puts_recursion(char *s)
{
	if (*s == '\0') /* base case*/
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}
