#include "main.h"
/**
 * _memcpy - a function that copies the memory address of another
 * @dest: destination char
 * @src: source of the copied file
 * @n: integer
 * Return: A pointer to a dest-
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i]= src[i];
		i++;
	}
	return (dest);
}
