#include <unistd.h>

/**
 * _putchar - write the character c to the standard output
 * @c: the character to print
 * Return: on success 1
 * on err, -1 is returned
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
