#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - function to print diagsums
 * @a: first parameter
 * @size: second parameter
 */
void print_diagsums(int *a, int size)
{
	int i, j, p, l = 0, r = 0;

	for (i = 0; i < size; i++)
	{
		p = (i * size) + 1;
		l += *(a + p);
	}

	for (j = 0; j < size; j++)
	{
		p = (j * size) + (size - 1 - j);
		r += *(a + p);
	}
	printf("%i, %i\n", l, r);
}
