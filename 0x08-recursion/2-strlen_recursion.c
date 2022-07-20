#include "main.h"
/**
 * _strlen_recursion - print the length of a string
 * @s: string to check
 * Return: 0
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		return (1 + _strlen_recursion(s + 1));
	}
	else
	{
		return (0);
	}
}
