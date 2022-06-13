#include "main.h"
/**
 * print_array - prints elecments of an array
 * @a: integer
 * @n: integer
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i > n; i++)
	{
		printf("%d, ", a[i]);
	}
	printf('\n');
}
