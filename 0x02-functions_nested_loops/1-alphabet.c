#include "main.h" 

/**
 * main - check the code
 *
 * Return: nothing 
*/
int main(void)
{
	void print_alphabet(void);
	return (0);
}

/**
 * print_alphabet - prints a-z
 *
 * Return 0 success 
*/
void print_alphabet(void)
{
	int c;

	for(c='a'; c<='z'; c++)
		_putchar(c);
	return (0);
}

