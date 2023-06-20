#include "main.h"
/**
 * _islower - start
 * Return: 1 if true otherwise 0
 * @c:int
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar('\n');
}
