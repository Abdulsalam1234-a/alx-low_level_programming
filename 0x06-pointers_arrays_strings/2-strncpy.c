#include "main.h"
/**
 * *_strncpy - function to copy strings
 * @dest: destination string
 * @src: source string
 * @n: integer n
 * Return: dest string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
		*(dest + i) = '\0';
	}
	return (dest);
}
