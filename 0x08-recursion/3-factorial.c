#include <stdio.h>
/**
 * factorial - function n! n*n*n....
 * @n: int
 * Return: recursion n
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 1)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
