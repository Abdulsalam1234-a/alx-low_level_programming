#include <stdio.h>
/**
 * main - function to print a number
 *
 * Return: zero
 */
int main(void)
{
int n;
int a[5];
int *p;

/*
 * write you line of code here...
 * Remember :
 * - you are not allowed to use a
 * - you are not allowed to use modified p
 * - only one statement
 * - you are not allowed to code anything else than this line of code
 */
a[2] = 1024;
p = &n;

*(p + 5) = 98;
/* ... so that this prints 98\n */

printf("a[2] = %d\n", a[2]);

return (0);
}
