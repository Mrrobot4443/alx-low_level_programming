#include "main.h"
/**
 * more_numbers- start
 * Return: 0
 */
void more_numbers(void)
{
	int a, j;

	for (a = 0; a < 10; a++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			_putchar(j % 10 + '48');
		}
	 _putchar('\n');
	}
}
