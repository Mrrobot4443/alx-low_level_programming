#include <stdio.h>
/**
 * main - alphabets lowercase
 *
 * Return: 0
 */
int main(void)
{
	char low[26] = "abcdefghijklmnopqrstuvwxyz";
	int i;

	for (i = 0; i < 26; i++)
	{
		putchar(low[i]);
	}
	putchar('\n');
return (0);
}
