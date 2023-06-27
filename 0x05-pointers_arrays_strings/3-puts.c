#include "main.h"
/**
 * _puts - function print string
 * @str: string
 * Return:lengh of str
 */
void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
