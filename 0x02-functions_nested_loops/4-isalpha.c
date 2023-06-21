#include "main.h"
/**
 * _isalpha - Start
 * @c: check
 * Return: 1 if c true, 0 otherwise
 */
int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
