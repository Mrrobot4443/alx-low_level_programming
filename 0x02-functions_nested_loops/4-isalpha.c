#include "main.h"
/**
 * _isalpha - Start
 * @c: check
 * Return: 1 if c true, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
		_putchar('\n');
}
