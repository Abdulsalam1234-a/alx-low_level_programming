#include <stdio.h>
#include "main.h"
/**
 * _ans- check for the absolute of a number
 * @c: parameter to be checked
 * Return: 0
*/
int _abs(int c)
{
	if (c > 0 || c == 0)
		return (c);
	else
		return (c * -1);
}

