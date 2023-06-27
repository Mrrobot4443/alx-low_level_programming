#include "main.h"
/**
* swap_int - switch value of a to b
* @a: int1
* @b: int2
* Return 0
*/
void swap_int(int *a, int *b)
{
		int i;

		i = *a;
		*a = *b;
		*b = i;
}
