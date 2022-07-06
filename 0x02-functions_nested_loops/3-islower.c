#include "main.h" 
/**
 * _islower - check if it's lower
 * @c: variable to use
 * Return 0
*/
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}

