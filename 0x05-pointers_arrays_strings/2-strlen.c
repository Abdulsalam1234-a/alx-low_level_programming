#include <stdio.h>
#include "main.h"

/**
 * _strlen - get the length of a string
 * @s: parameter to be checked
 * Return: always 0
*/
int _strlen(char *s)
{
	int sum;

	sum = 0;

	while (*s != '\0')
	{
		sum++;
		s++;
	}

	return (sum);
}
