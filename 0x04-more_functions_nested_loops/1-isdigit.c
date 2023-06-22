#include "main.h"
/**
 * _isdigit - start
 * @c: var
 * Return: 1 if "c" between 0 & 9
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
