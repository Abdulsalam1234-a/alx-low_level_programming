#include <stdio.h>
#include "main.h"

/**
 * print_array - function that print n element of arr
 * @a: first parameter
 * @n: second parameter
 */
void print_array(int *a, int n)
{
	int *ptr = a, i;

	for (i = 0; i < n; i++)
	{
		if (i == 0)
			printf("%d", ptr[i]);
		else if (i > 0)
		{
			printf(", ");
			printf("%d", ptr[i]);
		}
	}
	printf("%c", '\n');
}
