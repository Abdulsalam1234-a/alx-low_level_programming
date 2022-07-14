#include "main.h"
/**
 * string_toupper - function to convert to uppercase
 * @p: the string to convert
 * Return: uppercase string
 */
char *string_toupper(char *p)
{
	int i;

	for (i = 0; p[i] != '\0'; i++)
	{
		if (p[i] >= 97 && p[i] <= 122)
		{
			p[i] = p[i] - 32;
		}
	}
	return (p);
}
