#include "main.h"

/**
 * _strcpy - to copy string from place to another
 * @dest: destination parameter
 * @src: arc parameter
 * Return: values in destination
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}
	for (; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[l] = '\0';

	return (dest);
}
