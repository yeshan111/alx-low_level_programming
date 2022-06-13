#include "main.h"
/**
 * swap_int - swaps integers
 * @a: takes integer
 * @b: takes integer
 */
void swap_int(int *a, int *b)
{
	int x, y;

	x = *a;
	y = *b;
	*a = y;
	*b = x;
}
