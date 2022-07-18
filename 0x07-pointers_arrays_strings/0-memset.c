#include "main.h"
/**
 * _memset - function to set memory
 * @n: integer to test
 * @s: character of a pointer
 * @b: character b
 * Return: character s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
