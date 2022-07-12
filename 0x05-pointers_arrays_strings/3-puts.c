#include <stdio.h>
#include "main.h"

/**
 * _puts - printing a string followed by a newline to stdout
 * @str: parameter to use
*/
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');

}
