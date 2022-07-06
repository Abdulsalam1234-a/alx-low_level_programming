#include "main.h"
/**
 * _isalpha - check if it's alpha
 * @c: variable to print
 * Return: 0 if else
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

