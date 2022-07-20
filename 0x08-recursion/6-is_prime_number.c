#include "main.h"
/**
 * find_multipliers - looks for multiple
 * @n: first integer
 * @i: second integer
 * Return: 0
 */
int find_multipliers(int n, int i)
{
	if (i == n)
		return (1);
	if (n % i == 0)
		return (0);
	else
		return (find_multipliers(n, i + 1));
}

/**
 * is_prime_number- is prime number
 * @n: base n
 * Return: multipliers
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (find_multipliers(n, 2));
}
