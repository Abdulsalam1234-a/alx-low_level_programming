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

	char c='a';

	while(c<='z')
		_putchar(c);
		c++;
}

