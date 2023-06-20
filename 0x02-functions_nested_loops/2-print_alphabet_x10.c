#include "main.h"
/**
 * print_alphabet_x10 - start
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int Y;
	int S;

	for (S = 1; S <= 10; S++)
	{
		for (Y = 97; Y <= 122; Y++)
		{
			_putchar(Y);
		}
		_putchar('\n');
	}
}
