#include <stdio.h>
#include "main.h"


/**
 * swap_int - function that swapps the values of two parameters
 * @a: first parameter
 * @b: second parameter
*/
void swap_int(int *a, int *b)
{
	int c;


	c = *a;

	*a = *b;
	*b = c;
}
