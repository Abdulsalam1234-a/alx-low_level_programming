#include "main.h" 
/**
 * print_alphabet_x10 - a function that will print alphabet  ten times
 *
 * Return:  nothing 
*/
void print_alphabet_x10(void)
{
	char c, i;
	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		-putchar('\n');
	}
}

